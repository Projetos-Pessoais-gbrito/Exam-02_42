/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter_gs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 22:34:01 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/01/16 23:44:48 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void inter(char **argv)
{
	int seen[256] = {0};
	int j;
	int i;

	i = 0;
	j = 0;
	while (argv[1][i])
	{
		j = 0;
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j] && seen[argv[1][i]] != 1)
			{
				seen[argv[1][i]] = 1;
				write(1, &argv[1][i], 1);
				break;
			}
			j++;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		write (1, "\n", 1);
		return (0);
	}
	inter (argv);
	return (0);
}
