/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicrodri <vicrodri@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:09:50 by vicrodri          #+#    #+#             */
/*   Updated: 2023/03/26 17:48:02 by vicrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*arr;

	i = 0;
	len = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	arr = (int *)malloc(sizeof(int *) * len);
	if (!arr)
	{
		*range = 0;
		return (-1);
	}
	*range = arr;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (len);
}
