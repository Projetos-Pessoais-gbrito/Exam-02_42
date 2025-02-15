/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotone_burro.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 22:29:44 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/02/14 22:42:40 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main (int argc, char **argv)
{
	int i;

	i = 0;
	while (argv[1][i])
	{		
		char a = argv[1][i];
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			a = a + 1;
			if (argv[1][i] == 'z')
				write(1, "a", 1);
			else
				write(1, &a, 1);
		}
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			a = a + 1;
			if (argv[1][i] == 'Z')
				write(1, "A", 1);
			else
				write(1, &a, 1);
		}
		else
			write(1, &a, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

