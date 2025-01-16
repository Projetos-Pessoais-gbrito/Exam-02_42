/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake_gs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:58:12 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/01/13 19:45:02 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *camel_to_snake(char **argv)
{
	char capital_letter;
	int i;
	
	i = 0;
	while(argv[1][i])
	{
		write(1, &argv[1][i], 1);
		i++;
		while (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			capital_letter = argv[1][i] + 32;
			write(1, "_", 1);
			write(1, &capital_letter, 1);
			i++;
		}
	}
	return (argv[1]);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	camel_to_snake(argv);
	write(1, "\n", 1);
	return (0);
}