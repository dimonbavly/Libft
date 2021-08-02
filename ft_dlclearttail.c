#include <stdlib.h>
#include "libft.h"

void	ft_dlclearttail(t_dllist **dllst, void (*del) (void*))
{
	t_dllist	*current;

	if (!dllst)
		return ;
	(*dllst) = (*dllst)->next;
	current = *dllst;
	while (current)
	{
		del(current->content);
		*dllst = current->next;
		free(current);
		current = *dllst;
	}
	return ;
}
