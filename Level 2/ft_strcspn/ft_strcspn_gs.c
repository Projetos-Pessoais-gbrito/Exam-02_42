/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn_gs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 02:30:01 by codespace         #+#    #+#             */
/*   Updated: 2025/01/15 23:28:06 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(s[i])
	{
		while(reject[j])
		{
			if (s[i + j] == reject[j])
			{
				j++;
			}
			else
			{
				j = 0;
				break;
			}
		}
		if (reject[j] == '\0')
			break;
		i++;
	}
	printf("%d\n", j);
}

int main ()
{
	ft_strcspn("gustavo", "a");
	printf("%ld", strcspn("gustavo", "a"));
}