/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn_gs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 21:55:50 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/01/16 22:29:15 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <assert.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t size_to_return;

	size_to_return = 0;
	if (s[0] != accept[0] || s[0] == '\0' || accept[0] == '\0')
		return (size_to_return);
	while (*s == *accept)
	{
		size_to_return++;
		s++;
		accept++;
	}
	return (size_to_return); 
}
