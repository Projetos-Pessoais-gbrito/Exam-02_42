/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str_gs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:57:34 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/01/22 22:45:50 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void epur_str(char **argv)
{
	int i;

	i = 0;
	while(argv[1][i] == ' ')
		i++;
	while(argv[1][i])
	{
		while(argv[1][i] == ' ' && argv[1][i + 1] == ' ')
		{
			i++;
		}
		if(argv[1][i] == ' ' && argv[1][i + 1] == '\0')
			break;
		write(1, &argv[1][i], 1);
		if (argv[1][i] == '.')
			break;
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	epur_str(argv);
	write(1, "\n", 1);
	return (0);
}