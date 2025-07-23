/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhavard <lhavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:05:37 by lhavard           #+#    #+#             */
/*   Updated: 2025/07/21 15:00:48 by lhavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	isrc;
	int	idest;

	idest = 0;
	isrc = 0;
	while (dest[idest] != '\0')
	{
		idest++;
	}
	while (src[isrc] != '\0')
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
// 	char src[] = "ghijkl";
// 	char dest[30] = "abcdef";
// 	char dest_str[30] = "abcdef";

// 	printf("Il faut ajouter %s a %s\n", src, dest);
// 	printf("strcat donne :    %s\n", strcat(dest_str, src));
// 	ft_strcat(dest, src);
// 	printf("ft_strcat donne : %s\n", dest);

// 	return(0);
// }
