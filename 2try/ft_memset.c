/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohykim <dohykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 18:13:38 by dohykim           #+#    #+#             */
/*   Updated: 2021/02/06 18:59:24 by dohykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*temp;

	temp = (char *)b;
	while (len > 0)
	{
		len--;
		*temp++ = (char)c;
	}
	return (b);
}
