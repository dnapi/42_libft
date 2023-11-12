#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *pnt;

	if (!lst || !new)
		return ;
	pnt = ft_lstlast(*lst);
	if (!pnt)
		pnt = new;
	else
		pnt->next = new;
}

