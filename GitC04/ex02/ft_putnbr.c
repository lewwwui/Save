/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhavard <lhavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:28:34 by lhavard           #+#    #+#             */
/*   Updated: 2025/07/24 12:34:58 by lhavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 12);
	}
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		if (nb > 9)
		{
			ft_putnbr (nb / 10);
			nb = nb % 10;
		}
		if (nb < 10)
		{
			c = nb + 48;
			write(1, &c, 1);
		}
	}
}

// int main(void)
// {
// 	int n = -2147483648;
// 	printf("%d\n", n);
// 	ft_putnbr(n);
// 	return(0);
// }
