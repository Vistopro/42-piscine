/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicrodri <vicrodri@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:53:07 by vicrodri          #+#    #+#             */
/*   Updated: 2023/03/21 14:50:53 by vicrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_error(char *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i] != '\0')
	{
		if (tab[i] == '+' || tab[i] == '-'
			|| tab[i] == 127 || tab[i] <= 32
			|| size <= 1)
			return (0);
		j = i + 1;
		while (j < size)
		{
			if (tab[i] == tab[j])
			{
				return (0);
			}
		j++;
		}
		i++;
	}	
	return (1);
}

int	check_space(char *tab)
{
	int	i;

	i = 0;
	while (tab[i] == ' ' || (tab[i] >= 9 && tab[i] <= 13)
		|| tab[i] == '+' || tab[i] == '-')
		i++;
	return (i);
}

int	check_sign(char *tab)
{
	int	signo;
	int	i;

	i = 0;
	signo = 1;
	while (tab[i] == '+' || tab[i] == '-')
	{
		if (tab[i] == '-')
			signo *= -1;
		i++;
	}
	return (signo);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	n;
	int	nbase;

	n = 0;
	nbase = ft_strlen(base);
	if (check_error(base, nbase) == 0)
		return (0);
	i = check_space(str);
	while (str[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (str[i] == base[j])
				n = n * nbase + j;
			j++;
		}
		i++;
	}
	return (check_sign(str) * n);
}
