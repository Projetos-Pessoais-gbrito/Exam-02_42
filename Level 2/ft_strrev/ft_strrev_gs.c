/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev_gs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:56:19 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/01/16 21:38:29 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// char    *ft_strrev(char *str)
// {
//  	if (*str == '\0')
// 		return str;
// 	char *tmp = ft_strrev(str + 1);
// 	if (str[1] == '\0')
// 		return tmp;
// 	return (tmp);
// }

char *ft_strrev(char *str)
{
	char tmp;
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	while (j <= i / 2)
	{
		tmp = str[i - 1];
		str[i - 1] = str[j];
		str[j] = tmp;
		j++;
		i--;
	}
}

int main()
{
	printf("%s", ft_strrev("gustavo"));
	return (0);
}