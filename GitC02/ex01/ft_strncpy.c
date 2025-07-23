/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhavard <lhavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:25:22 by lhavard           #+#    #+#             */
/*   Updated: 2025/07/23 11:56:48 by lhavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest [i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char dest_ft[] = "xyz";
// 	char dest[] = "xyz";
// 	char *src = "abcd";
// 	unsigned int n = 2;

// 	printf("Source : %s | Dest : %s\n", src, dest);
// 	printf("Avec n = %d pour strncpy, dest : %s\n", n, strncpy(dest, src, n));
// 	printf("Avec n = %d pour ft, dest : %s\n", n, ft_strncpy(dest_ft, src, n));
// 	return(0);
// }
