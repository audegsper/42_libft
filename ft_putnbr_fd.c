/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohykim <dohykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 18:05:23 by dohykim           #+#    #+#             */
/*   Updated: 2021/01/21 16:49:34 by dohykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_maxminus(int *nb, int fd)
{
	if (*nb == (-2147483648))
	{
		write(fd, "-2147483648", 11);
	}
	else
	{
		write(fd, "-", 1);
		*nb = -(*nb);
	}
}

void	ft_putnbr_fd(int nb, int fd)
{
	int		*nb_ptr;
	char	data[10];
	int		data_idx;

	nb_ptr = &nb;
	data_idx = 0;
	if (nb < 0)
	{
		ft_maxminus(nb_ptr, fd);
	}
	while (nb / 10 > 0)
	{
		data[data_idx] = nb % 10 + 48;
		nb = nb / 10;
		data_idx++;
	}
	data[data_idx] = nb + 48;
	while (data_idx >= 0 && nb != (-2147483648))
	{
		write(fd, &data[data_idx], 1);
		data_idx--;
	}
}
