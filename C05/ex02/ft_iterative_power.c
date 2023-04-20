/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicrodri <vicrodri@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:43:48 by vicrodri          #+#    #+#             */
/*   Updated: 2023/03/22 10:44:45 by vicrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power > 0)
	{
		i *= nb;
		power--;
	}
	return (i);
}
