/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_print_gs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:58:50 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/01/09 21:35:53 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *rev_print(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	while (i > 0)
	{
		write(1, &str[i - 1], 1);
		i--; 
	}
	write(1, "\n", 1);
	return str;
}


