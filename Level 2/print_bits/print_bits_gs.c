/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits_gs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 23:31:30 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/01/20 21:54:37 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	char octet_bits;
	int i;
	i = (sizeof(unsigned char) * 8) - 1;
	while(i >= 0)
	{
		octet_bits = ((octet >> i) & 1) + '0';
		write(1, &octet_bits, 1);
		i--;
	}
}
