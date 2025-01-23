/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum_gs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 21:57:42 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/01/22 16:48:33 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void add_prime_sum_gs(int positive_int)
{
	char write_num[11];
	int sum_primes;
	int divisor;
	int i;

	sum_primes = 0;
	divisor = 0;
	i = 0;
	while(positive_int > 0)
	{
		divisor = positive_int - 1;
		while (divisor > 1)
		{
			if(positive_int % divisor == 0)
				break;
			divisor--;
		}
		if (divisor == 1)
			sum_primes += positive_int;
		positive_int--;
	}
	while(sum_primes > 0)
	{
		write_num[i] = ((sum_primes % 10) + '0');
		sum_primes = sum_primes / 10;
		i++;
	}
	while(i >= 0)
	{
		write(1, &write_num[i], 1);
		i--;
	}
}

int main(int argc, char **argv)
{
	int i_atoi;
	int result;
	
	i_atoi = 0;
	result = 0;
	if (argc != 2 || *argv[1] == '-')
	{
		write(1, "0", 1);
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i_atoi] == ' ')
		i_atoi++;
	while (argv[1][i_atoi] >= '0' && argv[1][i_atoi] <= '9')
	{
		result = (result * 10) + (argv[1][i_atoi] - '0');
		i_atoi++;
	}
	add_prime_sum_gs(result);
	return (0);
}
