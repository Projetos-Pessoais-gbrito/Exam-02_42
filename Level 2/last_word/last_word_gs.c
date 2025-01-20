/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word_gs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 12:42:06 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/01/19 16:31:36 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void last_word(char **argv)
{
	int	len_argv;
	int final_index;
	int initial_index;

	len_argv = 0;
	final_index = 0;
	initial_index = 0;
	while (argv[1][len_argv] == ' ' || argv[1][len_argv] == '\t')
		len_argv++;
	if (argv[1][len_argv] == '\0')
	{
		write (1, "\n", 1);
		return ;
	}
	len_argv = 0;
	while (argv[1][len_argv])
		len_argv++;
	while (argv[1][len_argv - 1] == ' ' || argv[1][len_argv - 1] == '\t' && argv[1][len_argv - 1])
		len_argv--;
	final_index = len_argv - 1;
	while (argv[1][len_argv - 1] != ' ' && argv[1][len_argv - 1])
		len_argv--;
	initial_index = len_argv;
	while (initial_index <= final_index)
	{
		write(1, &argv[1][initial_index], 1);
		initial_index++;
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	last_word(argv);
	return (0);
}