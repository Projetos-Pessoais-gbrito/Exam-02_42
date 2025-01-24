/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str_gs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 22:22:14 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/01/23 20:47:30 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void expand_str(char **argv)
{
	int i;

	i = 0;
	while(argv[1][i] == ' ')
		i++;
	while(argv[1][i])
	{
		if(argv[1][i] == ' ' && argv[1][i + 1] == ' ' && argv[1][i + 2] == '\0')
			break;
		if(argv[1][i] == ' ' && argv[1][i + 1] != ' ')
			write(1,"   ", 3);
		if(argv[1][i] == ' ' && argv[1][i + 1] == ' ')
			write(1,"   ", 3);
		while (argv[1][i] == ' ' && argv[1][i + 1] == ' ')
			i++;
		if (argv[1][i] == ' ' && argv[1][i + 1] != ' ')
			i++;
		write(1, &argv[1][i], 1);
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
	expand_str(argv);
	write(1, "\n", 1);
	return (0);
}
//this    time    it    will    be    more    complex   $
//this    time    it    will    be    more    complex   $
//this   time   it   will   be   more   complex
//this   time   it   will   be   more   complex
//this   time   it   will   be   more   complex   $