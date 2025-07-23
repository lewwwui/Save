/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhavard <lhavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:05:51 by lhavard           #+#    #+#             */
/*   Updated: 2025/07/23 16:59:49 by lhavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int n;

	n = nb;
	if (!(nb >= 0))
		return (0);
	if (nb == 0)
		return(1);
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

int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
	return (0);
}
