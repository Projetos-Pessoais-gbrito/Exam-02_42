/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_gs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 00:22:11 by codespace         #+#    #+#             */
/*   Updated: 2025/01/15 01:59:27 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_atoi_gs(const char *str)
{
    int result;
    int signal;

    result = 0;
    signal = 1;
    while(*str == 32)
        str++;
    if (*str == '+' || *str == '-')
    {    
        if (*str ==  '-')
            signal = signal * -1;
        str++;
    }
    while(*str)
    {
        if (*str >= '0' && *str <= '9')
            result = (result * 10) + (*str - '0');
        else
            break;
        str++;
    }
    return (result * signal);
}

// int main(void)
// {
//     // Testes variados para atoi
//     printf("Entrada: \"daoiushd123\"\n");
//     printf("Resultado ft_atoi_gs: %d\n", ft_atoi_gs("daoiushd123"));

//     printf("Entrada: \"123abc\"\n");
//     printf("Resultado ft_atoi_gs: %d\n", ft_atoi_gs("123abc"));

//     printf("Entrada: \"   456\"\n");
//     printf("Resultado ft_atoi_gs: %d\n", ft_atoi_gs("   456"));

//     printf("Entrada: \"-789\"\n");
//     printf("Resultado ft_atoi_gs: %d\n", ft_atoi_gs("-789"));

//     printf("Entrada: \" +42\"\n");
//     printf("Resultado ft_atoi_gs: %d\n", ft_atoi_gs(" +42"));

//     printf("Entrada: \"   -00123extra\"\n");
//     printf("Resultado ft_atoi_gs: %d\n", ft_atoi_gs("   -00123extra"));

//     printf("Entrada: \"---123\"\n");
//     printf("Resultado ft_atoi_gs: %d\n", ft_atoi_gs("---123"));

//     printf("Entrada: \"\"\n");
//     printf("Resultado ft_atoi_gs: %d\n", ft_atoi_gs(""));

//     printf("Entrada: \"0\"\n");
//     printf("Resultado ft_atoi_gs: %d\n", ft_atoi_gs("0"));

//     printf("Entrada: \"000123\"\n");
//     printf("Resultado ft_atoi_gs: %d\n", ft_atoi_gs("000123"));

//     return (0);
// }