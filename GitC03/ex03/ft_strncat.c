/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhavard <lhavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:05:37 by lhavard           #+#    #+#             */
/*   Updated: 2025/07/21 15:00:30 by lhavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	isrc;
	unsigned int	idest;

	idest = 0;
	isrc = 0;
	while (dest[idest] != '\0')
	{
		idest++;
	}
	while (isrc < nb && (dest[idest] != '\0' || src[isrc] != '\0'))
	{
		dest[idest] = src[isrc];
		idest++;
		isrc++;
	}
	dest[idest] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char src[30] = "123456789";
// 	char dest_ft[30] = "0";
// 	char dest_ncat[30] = "0";

// 	unsigned int nb;

// 	printf("Il faut ajouter %s a %s\n", src, dest_ft);

// 	nb = 5;
// 	printf("Pour nb = %d, nous avons %s\n", nb, ft_strncat(dest_ft, src, nb));
// 	printf("La fonction de base donne : %s\n", strncat(dest_ncat, src, nb));

// 	return(0);
// }
