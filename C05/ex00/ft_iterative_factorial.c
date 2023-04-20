/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicrodri <vicrodri@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:00:02 by vicrodri          #+#    #+#             */
/*   Updated: 2023/03/23 17:48:59 by vicrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb > 0)
	{
		while (nb > 1)
		{
			i = i * nb;
			nb--;
		}
		return (i);
	}
	else if (nb < 0)
		return (0);
	return (1);
}
