/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhavard <lhavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:50:49 by lhavard           #+#    #+#             */
/*   Updated: 2025/07/16 13:54:41 by lhavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 97) || (str[i] > 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_lowercase("a"));
// 	printf("%d\n", ft_str_is_lowercase("hsdjbjhsdbhjsd"));
// 	printf("%d\n", ft_str_is_lowercase("9"));
// 	printf("%d\n", ft_str_is_lowercase("TEST"));
// 	printf("%d\n", ft_str_is_lowercase("Test"));
// 	printf("%d\n", ft_str_is_lowercase("test b"));
// 	printf("%d\n", ft_str_is_lowercase(""));
// 	return(0);
// }
