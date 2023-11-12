#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *pnt;

	if (!lst || !del)
		return ;
	while ((*lst)->next)
	{
		pnt = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = pnt;
	}		
}
