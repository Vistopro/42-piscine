/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicrodri <vicrodri@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:58:53 by vicrodri          #+#    #+#             */
/*   Updated: 2023/03/24 09:09:45 by vicrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int n)
{
	int	i;

	i = 2;
	if (n < 2)
		return (0);
	while (i <= n / i)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = ft_is_prime(nb);
	if (i == 1)
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
