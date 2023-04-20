/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicrodri <vicrodri@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 19:40:39 by vicrodri          #+#    #+#             */
/*   Updated: 2023/03/20 19:32:33 by vicrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_cont(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	if (size <= ft_cont(dest))
		return (size + ft_cont(src));
	i = ft_cont(dest);
	j = 0;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_cont(dest) + ft_cont(&src[j]));
}
