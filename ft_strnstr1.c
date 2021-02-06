/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohykim <dohykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 16:51:09 by dohykim           #+#    #+#             */
/*   Updated: 2021/02/05 18:21:50 by dohykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	const char	*bkup;

	bkup = haystack;
	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (*haystack && len)
	{
		if (*haystack == needle[i])
			i++;
		else
		{
			i = 0;
			haystack = bkup++;
		}
		if (needle[i] == '\0')
			return ((char *)(haystack - i + 1));
		haystack++;
		len--;
	}
	return (NULL);
}
