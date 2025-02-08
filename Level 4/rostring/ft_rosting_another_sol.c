/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rosting_another_sol.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 23:52:43 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/02/08 00:25:50 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void rosting(char  **argv)
{
	int is_more_word;
	int flag;
	int i;

	is_more_word = 0;
	i = 0;
	flag = 0;
	while (argv[1][i])
	{
		if (argv[1][i] != ' ' && argv[1][i + 1] == ' ')
			is_more_word += 1;
		i++;
	}
	if (is_more_word >= 2)
	{
		i = 0;
		flag = 0;
		while (argv[1][i] == ' ')
			i++;
		while (argv[1][i] != ' ')
			i++;
		while (argv[1][i] == ' ')
			i++;
		while (argv[1][i])
		{
			while (argv[1][i] == ' ' && argv[1][i + 1] == ' ')
				i++;
			flag = 1;
			write(1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		if (flag == 1)
			write(1, " ", 1);
		while (argv[1][i] == ' ')
			i++;
		while (argv[1][i] != ' ')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	else {
		i = 0;
		while(argv[1][i] != ' ' && argv[1][i] != '\0')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
}

int main(int argc, char **argv)
{
	if(argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	rosting(argv);
	write(1, "\n", 1);
	return(0);
}
