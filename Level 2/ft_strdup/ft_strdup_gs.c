/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_gs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:09:54 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/01/16 15:13:58 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
	char *strdup;
	int i;

	i = 0;
	strdup = '\0';
	while (src[i])
		i++;
	strdup = malloc(sizeof (char) * (i + 1));
	i = 0;
	while (src[i])
	{
		strdup[i] = src[i];
		i++;
	}
	strdup[i] = '\0';
	return (strdup);
}
