/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word_gs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 12:04:26 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/01/09 12:04:27 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void first_word(char **argv)
{
	while(*argv[1])
	{
		write(1, &(*argv[1]), 1);
		*argv[1]++;
		if (*argv[1] == 32)
			break ;
	}
	write(1,"\n", 1);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	first_word(argv);
	return (0);
}