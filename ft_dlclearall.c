#include <stdlib.h>
#include "libft.h"

void	ft_dlclearall(t_dllist **dllst, void (*del) (void*))
{
	if (!dllst)
		return ;
	ft_dlclearthead(dllist, del);
	ft_dlclearttail(dllist, del);
	del(dllst->content);
	free(dllst);
	return ;
}
