/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk_gs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:14:27 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/01/16 16:48:51 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{	
	int		i;
	int		j;
	char	*returning_string;
	
	i = 0;
	j = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
