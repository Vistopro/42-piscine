/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicrodri <vicrodri@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:56:40 by vicrodri          #+#    #+#             */
/*   Updated: 2023/03/15 09:23:42 by vicrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;

	i = 0;
	while (i < size / 2)
	{
		a = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = a;
		i++;
	}
}
