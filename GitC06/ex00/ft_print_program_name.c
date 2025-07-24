/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhavard <lhavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 11:50:11 by lhavard           #+#    #+#             */
/*   Updated: 2025/07/24 12:05:53 by lhavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char** argv)
{
	char c;
	int i;

	i = 0;
	if(argc >= 0)
	{
		while (argv[0][i] != '\0')
		{
			c = argv[0][i];
			write (1, &c, 1);
			i++;
		}
		write (1, "\n", 1);
	}
	return(0);
}
