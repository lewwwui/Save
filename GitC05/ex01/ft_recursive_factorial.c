/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhavard <lhavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:43:12 by lhavard           #+#    #+#             */
/*   Updated: 2025/07/23 19:08:34 by lhavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	n;

	n = nb;
	if (!(nb >= 0))
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0 || n >= 1)
	{
		ft_recursive_factorial(nb *= n - 1);
	}
	return (nb);
}

int	main(void)
{
	printf("%d", ft_recursive_factorial(5));
	return (0);
}
