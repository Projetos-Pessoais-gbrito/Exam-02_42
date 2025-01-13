/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr_gs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 22:11:41 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/01/09 22:24:01 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ulstr(char **argv)
{
	while(*argv[1])
	{
		if (*argv[1] >= 'a' && *argv[1] <= 'z')
			*argv[1] += 32;
		if (*argv[1] >= 'A' && *argv[1] <= 'Z')
			*argv[1] += 32;
		write(1, &(*argv[1]), 1);
		argv[1]++;
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	ulstr(argv);
	write(1, "\n", 1);
	return (0);
}


