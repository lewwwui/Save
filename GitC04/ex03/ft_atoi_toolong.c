/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhavard <lhavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:39:53 by lhavard           #+#    #+#             */
/*   Updated: 2025/07/22 19:53:18 by lhavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int		x;
	int		i;
	char	c;

	x = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			x++;
		i++;
	}
	if (x % 2 == 1)
	{
		write(1, "-", 1);
	}
	i = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '-' || str[i] == '+'))
	{
		i++;
	}
	while (str[i] > '0' && str[i] < '9')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
	return (0);
}

int	main(void)
{
	ft_atoi("    ---+--+1234ab567");
	return (0);
}
