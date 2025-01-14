/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op_gs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:42:24 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/01/13 21:50:27 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void do_op(char **argv)
{
	unsigned int first_number;
	unsigned int second_number;
	unsigned int result;

	first_number = atoi(argv[1]);
	second_number = atoi(argv[3]);
	result = 0;
	if(*argv[2] == '*')
	{
		result = first_number * second_number;
		printf("%d", result);
	}
	else if(*argv[2] == '+')
	{
		result = first_number + second_number;
		printf("%d", result);
	}
	else if(*argv[2] == '-')
	{
		result = first_number - second_number;
		printf("%d", result);
	}
	else if(*argv[2] == '/')
	{
		result = first_number / second_number;
		printf("%d", result);
	}
	else if(*argv[2] == '%')
	{
		result = first_number % second_number;
		printf("%d", result);
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("\n");
		return (0);
	}
	do_op(argv);
	return (0);
}