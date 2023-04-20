/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicrodri <vicrodri@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 08:38:42 by vicrodri          #+#    #+#             */
/*   Updated: 2023/03/13 16:49:14 by vicrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			c = i / 10 + '0';
			write (1, &c, 1);
			c = i % 10 + '0';
			write (1, &c, 1);
			write (1, " ", 1);
			c = j / 10 + '0';
			write (1, &c, 1);
			c = j % 10 + '0';
			write (1, &c, 1);
			if ((i / 10 != 9 || i % 10 != 8))
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
