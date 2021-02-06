/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohykim <dohykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 22:00:12 by dohykim           #+#    #+#             */
/*   Updated: 2021/02/06 09:58:39 by dohykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char*)dst;
	if (!dst && !src)
		return (dst);
	while (n > 0)
	{
		if ((unsigned char)c == *((unsigned char*)src))
		{
			*temp = *(unsigned char*)src;
			return (unsigned char*)dst;
		}
		n--;
		*temp++ = *((unsigned char*)src)++;
	}
	return ((unsigned char*)dst);
}
