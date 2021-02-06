/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohykim <dohykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 19:25:06 by dohykim           #+#    #+#             */
/*   Updated: 2021/02/06 16:05:59 by dohykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = dst;
	if (!src || !dst)
		return (0);
	if (dstsize > 0)
	{
		while (i < dstsize - 1 && *src)
		{
			*tmp++ = *src++;
			++i;
		}
		*tmp = '\0';
	}
	while (*src++)
		++i;
	return (i);
}
