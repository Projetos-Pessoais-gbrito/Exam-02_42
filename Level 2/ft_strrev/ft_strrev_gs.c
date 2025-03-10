/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev_gs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:56:19 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/01/16 21:53:30 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrev(char *str)
{
	char tmp;
	int i;
	int j;

	i = 0;
	j = 0;
	if (*str == '\0')
		return (str);
	while (str[i])
		i++;
	while (j <= (i / 2))
	{
		tmp = str[i - 1];
		str[i - 1] = str[j];
		str[j] = tmp;
		j++;
		i--;
	}
	return (str);
}
