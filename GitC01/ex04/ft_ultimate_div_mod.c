/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhavard <lhavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:08:41 by lhavard           #+#    #+#             */
/*   Updated: 2025/07/14 12:44:14 by lhavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a1;
	int	b1;

	a1 = *a / *b;
	b1 = *a % *b;
	*a = a1;
	*b = b1;
}

/* int	main(void)
{
	int	a;
	int	b;

	a = 9;
	b = 2;
	printf("%d divisé par %d ", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("donne %d reste %d\n", a, b);
	return (0);
}
 */
