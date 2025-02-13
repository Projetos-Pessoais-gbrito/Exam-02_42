/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_gs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:30:18 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/02/13 13:30:20 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char    **ft_split(char *str)
{
    int word_index_begin;
    int word_index_final;
    int word_splited_len;
    int size_of_matrix; 
    int i; // index of main str
    char *split_word;
    char **split = {NULL};

    word_index_begin = 0;
    word_index_final = 0;
    word_splited_len = 0;
    size_of_matrix = 0;
    i = 0;
    while (str[i])
    {
        while (str[word_index_begin] == ' ')
            word_index_begin++;
        word_index_final = word_index_begin;
        while (str[word_index_final] != ' ' && str[word_index_final] != '\n')
        {
            word_splited_len++;
            word_index_final++;
        }
        if (str[word_index_final] == ' ' || str[word_index_final] == '\n' && str[word_index_begin - 1] == ' ' || str[word_index_begin - 1] == ' ')
            size_of_matrix += 1;

        split_word = malloc(sizeof (char) * word_splited_len + 1);

        word_index_begin += word_index_begin + i;
        i++;
    }
    printf("%d", size_of_matrix);
    return split;
}

int main(void)
{
    //word_index_begin aponta para G e final aponta para o espaco ou \n
    char my_name[100] = "  Gustavo\n  serafio \n correa  de brito";

    ft_split(my_name);
    return (0);
}