#include "libft.h"
#include <stdlib.h>

char *ft_itoa(int n)
{
	int cnt;
	int work_n;
	int sign;
	char *str;
	
	sign = 1;
	if (n < 0)
		sign = -1;
	else
		n  = -n;
	work_n = n;
	cnt = 0;
	while (work_n /= 10)
		cnt++;
	if (work_n / 10 == 0)
		cnt++;
	if (sign == -1)
		cnt++;
	str = malloc(sizeof(*str) * (cnt + 1));
   	if (!str)
		return (NULL);
	str[cnt--] = '\0';
	work_n = n;
	while (work_n / 10 < 0)
	{
		str[cnt--] = -(work_n % 10) + '0';
	   	work_n = work_n / 10;;
	}
	if (work_n / 10 == 0)
		str[cnt] = -(work_n % 10) + '0';
	if (sign == -1)
		str[--cnt] = '-';
	return (str);
}


