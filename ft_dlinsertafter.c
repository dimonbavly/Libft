#include "libft.h"

void	ft_dlinsertafter(t_dllist **dllst, t_dllist *new)
{
	if (dllst == NULL)
		return ;
	if (*dllst == NULL)
		*dllst = new;
	else
	{
		new->next = (*dllst)->next;
		new->prev = *dllst;
		*dllst = new;
	}
	return ;
}
