/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repeat_alpha_gs.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 16:51:32 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/01/09 17:57:11 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void repeat_alpha(char *argv)
{
	int index;
	int	char_instance;

	index = 0;
	while (argv[index])
	{
		char_instance = 0;
		if (argv[index] >= 'A' && argv[index] <= 'Z')
			char_instance = argv[index] - 'A'; 
		if (argv[index] >= 'a' && argv[index] <= 'z')
			char_instance = argv[index] - 'a'; 
		while(char_instance >= 0)
		{
			write(1, &argv[index], 1);
			char_instance--;
		}
		index++;
	}
	write(1,"\n", 1);
}

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	repeat_alpha(argv[1]);
	return (0);
}
