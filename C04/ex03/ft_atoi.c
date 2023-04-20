/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicrodri <vicrodri@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:19:35 by vicrodri          #+#    #+#             */
/*   Updated: 2023/03/30 13:49:05 by vicrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	signo;

	num = 0;
	i = 0;
	signo = 1;
	
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signo *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num) * 10 + (str[i] - '0');
		i++;
	}
	return (signo * num);
}
