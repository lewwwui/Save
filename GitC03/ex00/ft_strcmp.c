/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhavard <lhavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:59:48 by lhavard           #+#    #+#             */
/*   Updated: 2025/07/21 14:49:07 by lhavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++ ;
	}
	return (0);
}

// int	main(void)
// {
// 	char s1[]="abcd";
// 	char s2[]="aBCd";

// 	printf("Fonction de base : %d\n", strcmp(s1, s2));
// 	printf("ft_strcmp : %d\n", ft_strcmp(s1, s2));
// 	return(0);
// }
