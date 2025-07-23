/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhavard <lhavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:57:02 by lhavard           #+#    #+#             */
/*   Updated: 2025/07/19 15:32:22 by lhavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65) || (str[i] > 90))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_uppercase("A"));
// 	printf("%d\n", ft_str_is_uppercase("Avignon"));
// 	printf("%d\n", ft_str_is_uppercase("AVIGNON"));
// 	printf("%d\n", ft_str_is_uppercase("A320"));
// 	printf("%d\n", ft_str_is_uppercase(""));

// 	return(0);
// }
