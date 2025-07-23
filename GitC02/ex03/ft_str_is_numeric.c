/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhavard <lhavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:48:26 by lhavard           #+#    #+#             */
/*   Updated: 2025/07/16 13:49:32 by lhavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 48) || (str[i] > 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_numeric("r"));
// 	printf("%d\n", ft_str_is_numeric("9"));
// 	printf("%d\n", ft_str_is_numeric("01 "));
// 	printf("%d\n", ft_str_is_numeric("p1"));
// 	printf("%d\n", ft_str_is_numeric(""));
// 	return(0);
// }
