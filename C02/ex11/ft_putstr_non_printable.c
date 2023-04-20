/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicrodri <vicrodri@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:53:32 by vicrodri          #+#    #+#             */
/*   Updated: 2023/03/22 16:41:11 by vicrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;

	hex = "0123456789abcdef";
	while (*str != '\0')
	{
		i = (unsigned char)*str;
		if ((i < 32) || (i > 126))
		{
			ft_putchar('\\');
			ft_putchar(hex[i / 16]);
			ft_putchar(hex[i % 16]);
		}
		else
			ft_putchar(*str);
		str++;
	}
}
