/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhavard <lhavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:02:58 by lhavard           #+#    #+#             */
/*   Updated: 2025/07/14 11:33:24 by lhavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	exc;

	exc = *a;
	*a = *b;
	*b = exc;
}

/* int main()
{
	int a = 9;
	int b = 13;
	printf("Avant : a = %d et b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("Apres : a = %d et b = %d\n", a, b);
	return(0);
} */
