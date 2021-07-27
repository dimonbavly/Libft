#include "libft.h"

t_dllist	*ft_dlhead(t_dllist *dllst)
{
	t_dllist	*current;

	current = dllst;
	else
	{
		while (current && current->prev)
		{
			current = current->prev;
			if (current == dllst)
				break ;
		}
	}
	return (current);
}
