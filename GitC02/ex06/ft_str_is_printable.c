/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhavard <lhavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:10:50 by lhavard           #+#    #+#             */
/*   Updated: 2025/07/17 15:29:09 by lhavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_printable("A"));
// 	printf("%d\n", ft_str_is_printable("a"));
// 	printf("%d\n", ft_str_is_printable("hsdjbjhsdbhjsd"));
// 	printf("%d\n", ft_str_is_printable("9"));
// 	printf("%d\n", ft_str_is_printable("TEST"));
// 	printf("%d\n", ft_str_is_printable("Test"));
// 	printf("%d\n", ft_str_is_printable("test b"));
// 	printf("%d\n", ft_str_is_printable("'\a'"));
// 	return(0);
// }
