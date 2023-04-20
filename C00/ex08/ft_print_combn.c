/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicrodri <vicrodri@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:05:07 by vicrodri          #+#    #+#             */
/*   Updated: 2023/03/14 12:47:43 by vicrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int array[], int n)
{
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = array[i] + '0';
		write (1, &c, 1);
		i++;
	}
	if (array[0] != 10 - n)
		write (1, ", ", 2);
}

void	ft_recursive(int array[], int n, int i)
{
	if (i == 0)
		array[i] = 0;
	else
		array[i] = array[i - 1] +1;
	while (array[i] < 11 - n + i)
	{
		if (i == n -1)
			ft_print(array, n);
		else
			ft_recursive(array, n, i + 1);
		array[i] = array[i] + 1;
	}
}

void	ft_print_combn(int n)
{
	int	array[10];

	ft_recursive(array, n, 0);
}

int main () {ft_print_combn(9);}
