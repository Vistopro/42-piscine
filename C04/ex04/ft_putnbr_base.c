/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicrodri <vicrodri@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:56:04 by vicrodri          #+#    #+#             */
/*   Updated: 2023/03/21 20:02:55 by vicrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putbase(char *str, int n, int nbase)
{
	while (n >= nbase)
	{
		ft_putbase (str, n / nbase, nbase);
		n = n % nbase;
	}
	write (1, str + n, 1);
}

int	ft_compare_tab(char *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i] != '\0')
	{
		if (tab[i] == '+' || tab[i] == '-' || tab[i] == 127 || tab[i] <= 32)
			return (1);
		j = i + 1;
		while (j < size)
		{
			if (tab[i] == tab[j])
			{
				return (1);
			}
		j++;
		}
		i++;
	}	
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		nbase;
	int		i;

	i = 0;
	nbase = ft_strlen(base);
	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr *= -1;
	}
	if (nbase > 1 && ft_compare_tab (base, nbase) == 0)
	{
		ft_putbase (base, nbr, nbase);
	}
}
