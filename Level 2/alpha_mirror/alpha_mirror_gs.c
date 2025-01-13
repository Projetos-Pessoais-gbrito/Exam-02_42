/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror_gs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 22:34:05 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/01/09 23:58:39 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void alpha_mirror(char **argv)
{
	int i;
	int rest;
	char character_inverted;
	
	rest = 0;
	i = 0;
	character_inverted = '\0';
	while(argv[1][i])
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			rest = argv[1][i] - 'A';
			character_inverted =  'Z' - rest;
			write(1, &character_inverted, 1);
		}
		else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			rest = argv[1][i] - 'a';
			character_inverted =  'z' - rest;
			write(1, &character_inverted, 1);
		}
		else
			write(1, &argv[1][i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	alpha_mirror(argv);
	write(1, "\n", 1);
	return (0);
}