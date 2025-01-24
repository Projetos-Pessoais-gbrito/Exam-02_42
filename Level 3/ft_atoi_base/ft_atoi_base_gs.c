/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base_gs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:09:18 by gserafio          #+#    #+#             */
/*   Updated: 2025/01/23 22:02:17 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(const char *str, int str_base)
{
	int i;
	int sign;

	i = 0;
	sign = 1;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
	}
	while (str[i])
	{
		if (str_base == 10)
		{
			
		}
		if (str_base == 10)
		{
			
		}
		if (str_base == 4)
		{
			
		}
		if (str_base == 16)
		{
			
		}
		if (str_base == 8)
		{
			
		}
		i++;
	}
}

int main(void)
{
	ft_atoi_base("123", 16);
	return (0);
}