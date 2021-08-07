#include "libft.h"

void	ft_dlinsertafter(t_dllist **dllst, t_dllist *new)
{
	if (dllst == NULL)
		return ;
	if (*dllst == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*dllst = new;
	}
	else
	{
		new->next = (*dllst)->next;
		new->prev = *dllst;
		if ((*dllst)->next)
		{
			(*dllst)->next->prev = new;
			(*dllst)->next = new;
		}
	}
	return ;
}
