/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicrodri <vicrodri@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:09:38 by vicrodri          #+#    #+#             */
/*   Updated: 2023/03/16 09:26:27 by vicrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_hexa(char c, char *hex)
{
	if (c>16)
	{
		print_hexa(c / 16, hex);
		print_hexa(c % 16, hex);
	}
	else
		write(1, hex + c, 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char *hex;
	int i =0;
	hex="0123456789abcdef";
	while (i<size)
    {
        if ((char)addr + i < 16)
			write(1, "0", 1);
				
		print_hexa((char)addr+i , hex);    
		i++;
	}
	
	printf("%p",addr);
	return addr;
}


int main()
{
	void *addr;
	unsigned int	size=96;
	void	*a;
	
	addr = "Bonjour les aminches...c. est fou.tout.ce qu on peut faire avec...print_memory....lol.lol.";

	

	
	a = ft_print_memory(addr, size);
}