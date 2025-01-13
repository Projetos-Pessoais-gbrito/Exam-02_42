/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz_gs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 12:04:23 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/01/09 13:39:51 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void fizzbuzz(int i)
{
	char fizzbuzz[2] = {0};
	int	 count;
	int  tmp;

	tmp = 0;
	count = 0;
	while (i > 0)
	{
		tmp = i % 10;
		fizzbuzz[count] = tmp + '0';
		i = i / 10;
		count++;
	}
	while (count >= 0)
	{
		write (1, &(fizzbuzz[count]), 1);
		count--;
	}
}

int main()
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			fizzbuzz(i);
		write(1, "\n", 1);
		i++;
	}	
	
	return (0);
}