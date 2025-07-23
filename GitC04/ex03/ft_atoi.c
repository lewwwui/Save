/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhavard <lhavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:56:31 by lhavard           #+#    #+#             */
/*   Updated: 2025/07/23 12:51:47 by lhavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	count_minus(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			x++;
		i++;
	}
	return (x);
}

int	ft_strlenbf(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '-' || str[i] == '+'))
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int		x;
	int		i;
	char	c;

	x = count_minus(str);
	if (x % 2 == 1)
	{
		write(1, "-", 1);
	}
	i = ft_strlenbf(str);
	while (str[i] > '0' && str[i] < '9')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
	return (0);
}

// int	main(int argc, char* argv[])
// {
// 	if (argc != 0)
// 		ft_atoi(argv[1]);
// 	return(0);
// }
