/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srupert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 17:58:05 by srupert           #+#    #+#             */
/*   Updated: 2021/05/10 19:34:58 by srupert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	cnt;
	size_t	needlesize;
	if ((*needle == '\0' && len == 0) || needle == haystack)
		return ((char*)haystack);
	needlesize = ft_strlen(needle);
	cnt = 0;
	while ((ft_strncmp(haystack + cnt, needle, needlesize) != 0) && cnt < len)
		cnt++;
	if ((haystack + cnt) == '\0' || cnt + needlesize >= len)
		return (NULL);
	return ((char *)(haystack + cnt));
}
