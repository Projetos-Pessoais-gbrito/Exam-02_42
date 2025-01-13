/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace_gs.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 21:50:24 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/01/09 22:11:00 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void search_and_replace(char **argv)
{
	int second_arg_length;

	second_arg_length = 0;
	while (argv[2][second_arg_length])
		second_arg_length++;
	if (second_arg_length > 1)
		return ;
	while (*argv[1])
	{ 
		if(*argv[1] == *argv[2])
			*argv[1] = *argv[3];
		write(1, &(*argv[1]), 1);
		argv[1]++;
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	search_and_replace(argv);
	write(1, "\n", 1);
	return (0);
}
