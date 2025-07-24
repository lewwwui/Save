/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhavard <lhavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:52:53 by lhavard           #+#    #+#             */
/*   Updated: 2025/07/24 15:58:39 by lhavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (nb -1 > 0)
	{
		nb *= ft_recursive_power(nb, power);
	}
	return (result);
}

int	main(void)
{
	int nb;
	int power;

	nb = 2;
	power = 3;
	printf("%d puissance %d ", nb, power);
	printf("donne %d", ft_recursive_power(nb, power));
	return (0);
}
