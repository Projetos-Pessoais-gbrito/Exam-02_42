/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base_gs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:09:18 by gserafio          #+#    #+#             */
/*   Updated: 2025/02/15 01:54:59 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	if (str_base >= 2 && str_base <= 16)
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			if (str[i] - '0' < str_base)
			{
				result = (result * str_base) + (str[i] - '0');
				i++;
			}
			else
				return -1;
		}
		while (str[i] >= '0' && str[i] <= 'f')
		{
			if (str[i] - '0' < str_base)
			{
				result = (result * str_base) + (str[i] - '0');
				i++;
			}
			else if (str[i] - 'a' + 10 < str_base)
			{
				if (str[i] >= 'a' && str[i] <= 'f')
					result = (result * str_base + 10) + (str[i] - 'a');
				if (str[i] >= 'A' && str[i] <= 'F')
					result = (result * str_base + 10) + (str[i] - 'A');
				i++;
			}
			else
				return -1;
		}
		if ((str[i] > 'f' && str[i] <= 'z') || (str[i] > 'F' && str[i] <= 'Z'))
			return -1;
	}
	return (result * sign);
}

int main(void)
{
	printf("%d", ft_atoi_base("13",2));
	return (0);
}

// ----------------8<-------------[ START TEST 
// 	💻 TEST
// ./a.out "Ceci permet de decouvrir le fonctionnement de ton ft_atoi_base." "16"         🔎 YOUR OUTPUT:
// -1$
// 	🗝 EXPECTED OUTPUT:
// 3308$
// ----------------8<------------- END TEST ]


// #include <stdio.h>

// int	ft_atoi_base(const char *str, int str_base)
// {
//     int result;
//     int sign;
//     int i;

//     sign = 1;
//     result = 0;
//     i = 0;
//     while (str[i] == ' ')
//         i++;
//     if (str[i] == '+' || str[i] == '-')
//     {
//         if (str[i] == '-')
//             sign = -1;
//         i++;
//     }
//     while(str[i] >= '0' && str[i] <= '9')
//     {
//         result = result * str_base + (str[i] - '0');
//         i++;
//     }
//     while(str[i] >= 'a' && str[i] <= 'z' && str_base == 16)
//     {
//         result = (result + 10 * str_base) + (str[i] - 'a');
//         i++;
//     }
//     return (result);
// }

// int main(void)
// {
//     printf("%d", ft_atoi_base("7B", 16));
//     return (0);
// }