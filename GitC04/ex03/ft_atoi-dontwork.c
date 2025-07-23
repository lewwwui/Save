/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi-dontwork.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhavard <lhavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:56:31 by lhavard           #+#    #+#             */
/*   Updated: 2025/07/22 19:56:52 by lhavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int    count_minus(char *str, int x)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '-')
            x++;
        i++;
    }
    return(x);
}

int    ft_strlenbf(char *str, int i)
{
    while (str[i] != '\0' && (str[i] == ' ' || str[i] == '-' || str[i] == '+'))
    {
        i++;
    }
    return (i);
}

int    ft_atoi(char *str)
{
    int x;
    int i;
    char c;

    x = 0;
    i = 0;
    count_minus(str, x);
    if (x % 2 == 1)
    {
        write(1, "-", 1);
    }

    ft_strlenbf(str, i);
    while (str[i] > '0' && str[i] < '9')
    {
        c = str[i];
        write(1, &c, 1);
        i++;
    }
    return(0);
}

int    main(void)
{
    ft_atoi("    ---+--+1234ab567");
    return(0);
}
