/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicrodri <vicrodri@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:06:11 by vicrodri          #+#    #+#             */
/*   Updated: 2023/03/29 13:06:58 by vicrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	j;

	i = 0;
	while (par[i].str != 0)
	{
		j = 0;
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		while (par[i].str[j] != '\0')
		{
			write(1, &(par[i].str[j]), 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		while (par[i].copy[j] != '\0')
		{
			write(1, &(par[i].copy[j]), 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
