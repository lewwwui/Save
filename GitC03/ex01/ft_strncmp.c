/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhavard <lhavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 16:35:50 by lhavard           #+#    #+#             */
/*   Updated: 2025/07/21 14:49:01 by lhavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	d;

	i = 0;
	d = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (d);
}

// int	main(void)
// {
// 	char s1[] = "ABC";
// 	char s2[] = "ABc";
// 	unsigned int n;

// 	printf("S1 : %s compare a S2 : %s\n\n", s1, s2);

// 	n = 1;
// 	printf("Si n = %d, ft_strncpy = %d\n", n, ft_strncmp(s1, s2, n));
// 	printf("Fonction de reference : %d\n\n", strncmp(s1, s2, n));

// 	n = 2;
// 	printf("Si n = %d, ft_strncpy = %d\n", n, ft_strncmp(s1, s2, n));
// 	printf("Fonction de reference : %d\n\n", strncmp(s1, s2, n));

// 	n = 3;
// 	printf("Si n = %d, ft_strncpy = %d\n", n, ft_strncmp(s1, s2, n));
// 	printf("Fonction de reference : %d\n\n", strncmp(s1, s2, n));

// 	n = 5;
// 	printf("Si n = %d, ft_strncpy = %d\n", n, ft_strncmp(s1, s2, n));
// 	printf("Fonction de reference : %d\n\n", strncmp(s1, s2, n));

// 	n = 0;
// 	printf("Si n = %d, ft_strncpy = %d\n", n, ft_strncmp(s1, s2, n));
// 	printf("Fonction de reference : %d\n", strncmp(s1, s2, n));

// 	return(0);
// }
