/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotone_gs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 21:37:19 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/01/09 21:48:31 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rotone(char *argv)
{
	int index;
	int rest;
	char a;

	index = 0;
	rest = 0;
	while(argv[index])
	{
		rest = 0;
		if (argv[index] >= 'A' && argv[index] <= 'Z')
		{
			if (argv[index] + 1 > 'Z')
			{
				rest = argv[index] - 'Z';
				a = 'A' + rest;
				write(1, &a, 1);
			}
			else
			{
				a = argv[index] + 1;
				write(1,&a, 1);
			}
		}
		else if (argv[index] >= 'a' && argv[index] <= 'z')
		{
			if (argv[index] + 1 > 'z')
			{
				rest = argv[index] - 'z';
				a = 'a' + rest;			
				write(1, &a, 1);
			}
			else
			{
				a = argv[index] + 1;
				write(1,&a, 1);
			}
		}
		else
			write(1, &argv[index], 1);
		index++;
	}
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1,"\n",1);
		return (0);
	}
	rotone(argv[1]);
	return (0);
}
