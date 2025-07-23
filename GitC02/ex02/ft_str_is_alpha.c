/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhavard <lhavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:49:30 by lhavard           #+#    #+#             */
/*   Updated: 2025/07/17 15:51:16 by lhavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65) || (str[i] > 90 && str[i] < 97) || (str[i] > 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_alpha("r"));
// 	printf("%d\n", ft_str_is_alpha("rouge"));
// 	printf("%d\n", ft_str_is_alpha("Rouge"));
// 	printf("%d\n", ft_str_is_alpha("012324"));
// 	printf("%d\n", ft_str_is_alpha("rouge8"));
// 	printf("%d\n", ft_str_is_alpha(""));

// 	return(0);
// }
