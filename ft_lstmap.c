#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*new;

	if (!lst || !f || !del)
		return (NULL);
	node = NULL;
	while (lst)
	{
        new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			while (node)
			{
				new = node->next;
				(*del)(node->content);
				free(node);
				node = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&node, new);
		lst = lst->next;
	}
	return (node);
}