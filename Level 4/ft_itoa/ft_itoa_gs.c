/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_gs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:04:55 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/02/11 12:48:29 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_convert_to_string(int n, char *result, int number_size)
{
	int tmp_storage_int;

	tmp_storage_int = 0;
	if (n == 0)
		return (result);
	tmp_storage_int = n % 10;
	ft_convert_to_string(n / 10, result, number_size - 1);
	result[number_size - 1] = tmp_storage_int + '0';
	number_size++;
	return result;
}

int ft_count_digits(int n)
{
	int number_size;

	number_size = 0;
	if (n < 0)
	{
		n = n * -1;
		number_size++;
	}
	while (n > 0)
	{
		n = n / 10;
		number_size++;
	}
	return (number_size);
}

char *ft_strcpy(char *destiny, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		destiny[i] = src[i];
		i++;
	}
	destiny[i] = '\0';
	return (destiny);
}

char *ft_itoa(int n)
{
	char *result;
	int number_size;

	number_size = 0;
	if (n == -2147483648)
	{
		result = malloc(sizeof(char) * 11 + 1);
		if (!result)
			return NULL;
		result = ft_strcpy(result, "-2147483648");
		return (result);
	}
	if (n == 0)
	{
		result = malloc(sizeof(char) * 1 + 1);
		if (!result)
			return NULL;
		result = ft_strcpy(result, "0");
		return (result);
	}
	number_size = ft_count_digits(n);
	result = malloc(sizeof(char) * number_size + 1);
	if (!result)
		return NULL;
	if (n < 0)
	{
		n = n * -1;
		result[0] = '-';
	}
	return (ft_convert_to_string(n ,result, number_size));
}

int main(void)
{
	printf("%s", ft_itoa(2147483646));
	return (0);
}