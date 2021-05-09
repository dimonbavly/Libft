/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srupert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 13:14:20 by srupert           #+#    #+#             */
/*   Updated: 2021/05/09 19:27:05 by srupert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c);

int	ft_atoi(const char *str)
{
	int	cnt;
	int	result;
	int	plusminus;

	plusminus = 1;
	cnt = 0;
	while (ft_isspace(str[cnt]))
		cnt++;
	if (str[cnt] == '-' || str[cnt] == '+')
	{
		if (str[cnt] == '-')
			plusminus = -1;
		cnt++;
	}
	result = 0;
	while (ft_isdigit(str[cnt]))
	{
		result = result * 10 + (str[cnt] - '0');
		cnt++;
	}
	return (result * plusminus);
}

static int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	else
		return (0);
}
