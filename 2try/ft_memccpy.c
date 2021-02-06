/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohykim <dohykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 22:00:12 by dohykim           #+#    #+#             */
/*   Updated: 2021/02/06 13:20:31 by dohykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	if (!dst && !src)
		return (dst);
	while (n--)
	{
		*(unsigned char *)dst++ = *(unsigned char*)src;
		if ((unsigned char)c == *(unsigned char*)src++)
			return (unsigned char*)dst;
	}
	return (NULL);
}
