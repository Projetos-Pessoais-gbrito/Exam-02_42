/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr_gs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:35:37 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/02/12 23:06:02 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void rev_wstr(char **argv)
{
    int str_len;
    int i;
    int word_final_index;
    int tmp_word_first_index;
    int word_first_index;

    str_len = 0;
    word_final_index = 0;
    i = 0;
    tmp_word_first_index = 0;
    word_first_index = 0;
    while (argv[1][str_len])
        str_len++;
    while (argv[1][i] == ' ')
        i++;
    while (argv[1][str_len - 1] == ' ')
        str_len--;
    word_first_index = str_len - 1;
    word_final_index = str_len - 1;
    while (word_first_index > i)
    {
        while (argv[1][word_first_index] != ' ' && word_first_index >= 0)
        {
            if (argv[1][word_first_index + 2] == ' ') //Defino o first index de cada palavra
                word_final_index = word_first_index;
            word_first_index--;
        }
        tmp_word_first_index = word_first_index + 1;
        while(tmp_word_first_index <= word_final_index + 1 && 
              argv[1][tmp_word_first_index] != '\0')
        {
            if (argv[1][tmp_word_first_index + 1] == ' ' && argv[1][tmp_word_first_index - 1] == ' ')
            {
                write(1, &argv[1][tmp_word_first_index], 1);
                write(1, &argv[1][tmp_word_first_index + 1], 1);
                break;
            }
                write(1, &argv[1][tmp_word_first_index], 1);
            if (argv[1][tmp_word_first_index + 1] == ' '
            && word_first_index >= 0)
                write(1, &argv[1][tmp_word_first_index + 1], 1);
            
			tmp_word_first_index++;
        }
        if (argv[1][word_final_index + 1] == '\0' && argv[1][word_first_index + 1] != argv[1][0])
            write(1, " ", 1);
        word_first_index--;
    }
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write (1, "\n", 1);
        return (0);
    }
    rev_wstr(argv);
    write(1, "\n", 1);
    return (0);
}