/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicrodri <vicrodri@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 09:59:27 by vicrodri          #+#    #+#             */
/*   Updated: 2023/03/13 20:12:33 by vicrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int		n;
	char				c;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	n = nb;
	if (n > 9)
	{
		ft_putnbr (n / 10);
		n %= 10;
	}
	c = n + '0';
	write (1, &c, 1);
}
