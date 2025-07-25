/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhavard <lhavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:56:31 by lhavard           #+#    #+#             */
/*   Updated: 2025/07/24 14:18:47 by lhavard          ###   ########.fr       */
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
	while (str[i] != '\0'
		&& ((str[i] >= 9 && str[i] <= 13)
			||str[i] == ' ' || str[i] == '-' || str[i] == '+'))
	{
		i++;
	}
	return (i);
}

int	checkspaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0'
		&& ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
		i++;
	while (str[i] != '\0' && (!(str[i] >= '0' && str[i] <= '9')))
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	x;
	int	i;
	int	a;

	a = 0;
	if (checkspaces(str) == 0)
	{
		return (0);
	}
	i = ft_strlenbf(str);
	while (str[i] >= '0' && str[i] <= '9')
	{
		a += (str[i] - 48);
		a *= 10;
		i++;
	}
	a /= 10;
	x = count_minus(str);
	if (x % 2 == 1)
	{
		a *= -1;
	}
	return (a);
}

// int	main(int argc, char* argv[])
// {
// 	if (argc != 0)
// 		printf("%d", ft_atoi(argv[1]));
// 	return(0);
// }
