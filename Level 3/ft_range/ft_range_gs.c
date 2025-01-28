/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range_gs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 22:38:34 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/01/27 23:00:35 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int elements_in_array;
	int index;
	int tmp;
	int *int_array;

	elements_in_array = 0;
	int_array = 0;
	index = 0;
	tmp = start;
	while(start <= end)
	{
		elements_in_array++;
		start++;
	}
	int_array = malloc(sizeof (int) * elements_in_array);
	if (int_array == ((void *)0))
		return NULL;
	while (index < elements_in_array)
	{
		int_array[index] = tmp;
		tmp++;
		index++;
	}
	return int_array;
}

int main(void)
{
	ft_range(1, 3);
	return (0);
}