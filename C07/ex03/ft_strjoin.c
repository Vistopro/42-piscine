/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicrodri <vicrodri@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:12:47 by vicrodri          #+#    #+#             */
/*   Updated: 2023/03/26 19:53:53 by vicrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *strs)
{
	int	i;

	i = 0;
	while (strs[i] != '\0')
		i++;
	return (i);
}

char	*ft_str(char **strs, int size, char *res, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			res[k++] = strs[i][j++];
		j = 0;
		i++;
		while (sep[j] != '\0' && i < size)
			res[k++] = sep[j++];
	}
	res[k] = '\0';
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		len;
	int		i;
	int		lensep;

	i = 0;
	lensep = ft_len(sep);
	while (i < size)
	{
		len += ft_len(strs[i]);
		len += lensep;
		i++;
	}
	len -= lensep;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	res = (char *)malloc(sizeof(char) * len);
	if (!res)
		return (0);
	res = ft_str(strs, size, res, sep);
	return (res);
}
