/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_gs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 16:32:39 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/01/19 19:35:21 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int* tab, unsigned int len)
{
	int i;
	int j;
	int temp;
	
	i = 0;
	j = 0;
	temp = 0;
	while (tab[i])
	{
		j = 0;
		while(tab[j])
		{
			if(tab[j] > tab[j + 1])
			{
				
			}
		}
		i++;
	}
}

void main(void)
{
	int	find_higher[10] = {54,6,7,19,0,5,90,100,123,1};
	max	(find_higher, 10);
}
