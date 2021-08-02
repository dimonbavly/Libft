#include <stdlib.h>
#include "libft.h"

void	ft_dlclearthead(t_dllist **dllst, void (*del) (void*))
{
	t_dllist	*current;

	if (!dllst)
		return ;
	(*dllst) = (*dllst)->prev;
	current = *dllst;
	while (current)
	{
		del(current->content);
		*dllst = current->prev;
		free(current);
		current = *dllst;
	}
	return ;
}
