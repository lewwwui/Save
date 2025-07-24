/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhavard <lhavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:05:51 by lhavard           #+#    #+#             */
/*   Updated: 2025/07/24 11:25:49 by lhavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = nb - 1;
	if (!(nb >= 0))
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		while (n >= 1)
		{
			nb *= n;
			n--;
		}
	}
	return (nb);
}

// int	main(void)
// {
// 	printf("%d/n", ft_iterative_factorial(3));
// 	printf("%d/n", ft_iterative_factorial(5));
// 	printf("%d/n", ft_iterative_factorial(1));
// 	printf("%d/n", ft_iterative_factorial(0));
// 	printf("%d/n", ft_iterative_factorial(-1));
// 	return (0);
// }
