/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_gs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 16:32:39 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/01/19 23:30:29 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int* tab, unsigned int len)
{
	int i;
	int j;
	int temp;
	int	higher_value;
	
	i = 0;
	j = 0;
	temp = 0;
	while (i < len)
	{
		j = 0;
		while(j < len)
		{
			if(tab[j] > tab[j + 1])
			{
				temp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
	higher_value = tab[len - 1]; 
	return (higher_value);
}

int main(void)
{
	int	find_higher[10] = {54,6,7,140,0,5,90,100,123,1};
	printf("%d", max(find_higher, 10));
	return (0);
}

