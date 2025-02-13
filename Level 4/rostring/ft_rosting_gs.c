/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rosting_another_sol.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 23:52:43 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/02/13 00:44:14 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rostring(char **argv)
{
    int str_len;
    int start_first_string;
    int end_first_string;
    int is_more_than_a_word;
    int i;

    i = 0;
    str_len = 0;
    start_first_string = 0;
    is_more_than_a_word = 0;
    while (argv[1][str_len])
        str_len++;
    while (argv[1][i] == ' ')
        i++;
    while (argv[1][str_len - 1] == ' ')
        str_len--;
    start_first_string = i;
    while (argv[1][i] != ' ' && argv[1][i] != '\0')
    {
        end_first_string = i;
        i++;
    }
    i = end_first_string;
    while (i < str_len - 2)
    {
        while (argv[1][i + 2] == ' ' && argv[1][i + 3] == ' ')
            i++;
        write(1, &argv[1][i + 2], 1);
        is_more_than_a_word = 1;
        i++;
    }
    if (is_more_than_a_word == 1)
        write(1, " ", 1);
    while (start_first_string <= end_first_string)
    {
        write(1, &argv[1][start_first_string], 1);
        start_first_string++;
    }
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        write(1,"\n",1);
        return (0);
    }
    rostring(argv);
    write(1, "\n", 1);
    return (0);
}
