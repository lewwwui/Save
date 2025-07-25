/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhavard <lhavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:43:12 by lhavard           #+#    #+#             */
/*   Updated: 2025/07/24 15:15:21 by lhavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (!(nb >= 0))
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		nb *= ft_recursive_factorial(nb - 1);
	}
	return(nb);
}

// int	main()
// {
// 	printf("%d", ft_recursive_factorial(-1));
// 	return (0);
// }
