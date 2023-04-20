/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicrodri <vicrodri@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 19:00:54 by vicrodri          #+#    #+#             */
/*   Updated: 2023/03/20 08:39:03 by vicrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*result;

	result = str;
	if (*to_find == '\0')
		return (str);
	while (*result)
	{
		i = 0;
		if (*result == to_find[0])
		{
			while (result[i] == to_find[i] && to_find[i])
				i++;
			if (to_find[i] == '\0')
				return (result);
		}
		result++;
	}
	return (0);
}
