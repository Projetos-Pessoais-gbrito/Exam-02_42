/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list_gs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:20:47 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/02/11 21:33:50 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "list.h"


int cmp_nodes(int a, int b)
{
	return (a >= b);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *head;
	t_list *list_to_return;
	int tmp;
	int count;

	tmp = 0;
	count = 0;
	list_to_return = lst;
	while (lst)
	{
		head = lst->next;
		while (head)
		{
			if (cmp_nodes(lst->data, head->data))
			{
				tmp = head->data;
				head->data = lst->data;
				lst->data = tmp;
			}
			head = head->next;
		}
		lst = lst->next;
	}
	return (list_to_return);
}

void print_list(t_list *head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    // Criando nós estaticamente
    t_list n1 = {5, NULL};
    t_list n2 = {3, NULL};
    t_list n3 = {8, NULL};
    t_list n4 = {2, NULL};
    t_list n5 = {6, NULL};

    // Ligando os nós manualmente
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    t_list *head = &n1;  // O primeiro nó da lista

    printf("Lista antes de ordenar:\n");
    print_list(head);

    head = sort_list(head, cmp_nodes);

    printf("Lista depois de ordenar:\n");
    print_list(head);

    return 0;
}