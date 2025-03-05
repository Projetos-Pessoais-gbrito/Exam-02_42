/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_gs.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:51:22 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/03/04 21:30:59 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

// Função que será aplicada a cada elemento da lista
void print_data(void *data)
{
    printf("%s\n", (char *)data);
}

int main()
{
    // Criando manualmente uma lista encadeada de 3 nós
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));

    node1->data = "Primeiro";
    node1->next = node2;

    node2->data = "Segundo";
    node2->next = node3;

    node3->data = "Terceiro";
    node3->next = NULL;

    // Aplicando a função print_data a cada elemento
    ft_list_foreach(node1, print_data);

    // Liberando a memória
    free(node1);
    free(node2);
    free(node3);

    return 0;
}