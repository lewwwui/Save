/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhavard <lhavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:16:26 by lhavard           #+#    #+#             */
/*   Updated: 2025/07/24 15:49:30 by lhavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	n;

	result = nb;
	n = power;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (n - 1 > 0)
	{
		result *= nb;
		n--;
	}
	return (result);
}

// int	main(void)
// {
// 	int nb;
// 	int power;

// 	nb = 2;
// 	power = 3;
// 	printf("%d puissance %d ", nb, power);
// 	printf("donne %d", ft_iterative_power(nb, power));
// 	return (0);
// }
