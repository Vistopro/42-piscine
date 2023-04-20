/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicrodri <vicrodri@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:54:10 by vicrodri          #+#    #+#             */
/*   Updated: 2023/03/22 16:22:28 by vicrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	str = ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& !(
				(str[i - 1] >= 65 && str[i - 1] <= 90)
				|| (str[i - 1] >= 97 && str[i - 1] <= 122)
				|| (str[i - 1] >= 48 && str[i - 1] <= 57)))
			str[i] = str[i] -32;
		i++;
	}
	return (str);
}
