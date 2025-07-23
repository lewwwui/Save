/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhavard <lhavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:31:13 by lhavard           #+#    #+#             */
/*   Updated: 2025/07/21 16:41:15 by lhavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str, int i)
{
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	istr;
	int	ifind;
	int	ifindmax;

	istr = 0;
	ifind = 0;
	ifindmax = 0;
	ft_strlen(str, ifindmax);
	while (str[istr] != '\0' && to_find[ifind] != '\0')
	{
		if (str[istr] == to_find[ifind])
		{
			istr++;
			ifind++;
		}
	}
	if (ifind == ifindmax)
		return (str);
	else
		return (0);
}

// int	main(void)
// {
// 	char str[] = "0 Apple";
// 	char to_find[] = "0 ";

// 	printf("Il faut trouver %s dans %s\n", to_find, str);
// 	printf("Fonction de base :   %s\n", strstr(str, to_find));
// 	printf("Resultat ft_strstr : %s\n", strstr(str, to_find));
// 	return(0);
// }
