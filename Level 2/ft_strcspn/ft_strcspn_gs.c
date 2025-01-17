/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn_gs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 02:30:01 by codespace         #+#    #+#             */
/*   Updated: 2025/01/16 15:14:01 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i;
	int j;
	size_t initial_seg_bytes;

	i = 0;
	j = 0;
	initial_seg_bytes = 0;
	if (reject[0] == '\0')
	{
		while (s[initial_seg_bytes])
			initial_seg_bytes++;
		return (initial_seg_bytes);
	}
	while(s[i])
	{
		while(reject[j])
		{
			if (s[i + j] == reject[j])
				j++;
			else
				break;
		}
		if (reject[j] == '\0')
			break;
		i++;
	}
	if (reject[j] == '\0')
		while (s[initial_seg_bytes] != s[i])
			initial_seg_bytes++;
	else
		while (s[initial_seg_bytes] != reject[j])
			initial_seg_bytes++;
	return (initial_seg_bytes);
}

int main ()
{
	printf("%ld\n", ft_strcspn("hello wod", "world"));
	printf("%ld\n", strcspn("hello wod", "world"));
	printf("%ld\n", ft_strcspn("guvtavo", "avo"));
	printf("%ld\n", strcspn("guvtavo", "avo"));
}