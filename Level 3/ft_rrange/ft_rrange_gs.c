/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange_gs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 23:51:18 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/01/29 07:59:56 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
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
	while(start > end)
	{
		elements_in_array++;
		start--;
	}
	int_array = malloc(sizeof (int) * elements_in_array);
	if (int_array == ((void *)0))
		return NULL;
	while (end >= tmp)
	{
		int_array[index] = end;
		end--;
		index++;
	}
	while (end <= tmp)
	{
		int_array[index] = end;
		end++;
		index++;
	}
	int_array[index] = tmp;
	return int_array;
}

int main(void)
{
	ft_rrange(0, -3);
	return (0);
}