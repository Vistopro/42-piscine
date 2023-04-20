/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicrodri <vicrodri@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:54:56 by vicrodri          #+#    #+#             */
/*   Updated: 2023/03/26 17:44:03 by vicrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	len;
	int	i;

	i = 0;
	len = max - min;
	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof(int) * len);
	if (!arr)
		return (0);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
