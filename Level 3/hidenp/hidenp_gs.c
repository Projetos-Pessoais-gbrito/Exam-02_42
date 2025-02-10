/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp_gs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 08:01:09 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/02/09 18:57:24 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void hidenp(char **argv)
{
    int i;
    int j;
    int tmp_j;
    int tmp_i;
    int result_flag;
    char is_same_text;
    
    i = 0;
    j = 0;
    result_flag = 1;
    while (argv[1][i])
    {
        j = 0;
        while (argv[2][j])
        {
            if (argv[1][i] == argv[2][j])
            {
                tmp_i = i;
                tmp_j = 0;
                while (argv[1][tmp_i + 1] && tmp_i < j)
                {
                    if (argv[1][tmp_i + 1] == argv[2][tmp_j])
                    {
                        result_flag = 0;
                        break;
                    }
                    tmp_i++;
                }
            }
            if (result_flag == 0)
                break;
            j++;
        }
        if (result_flag == 0)
            break;
        i++;
    }
    is_same_text = result_flag + '0';
    write(1,&is_same_text, 1);
}

int main (int argc, char **argv)
{
    if (argc != 3)
    {
        write(1, "\n", 1);
        return (0);
    }
    hidenp(argv);
    write(1, "\n", 1);
    return (0);
}