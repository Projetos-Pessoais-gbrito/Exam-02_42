/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size_gs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:11:35 by gustavo-lin       #+#    #+#             */
/*   Updated: 2025/01/27 22:33:44 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list_gs.h"

// t_list *create_list()
// {
// 	t_list *linked_list;
// 	linked_list = (t_list*)malloc(sizeof(t_list));
// 	if (linked_list == NULL)
// 		return	(NULL);
// 	linked_list->data = (char *)malloc(10);
// 	if(!linked_list->data)
// 		return	(NULL);
// 	linked_list->next = NULL;
// 	return (linked_list);
// }

int	ft_list_size(t_list *begin_list)
{
	int elements;
	elements = 0;

	while(begin_list != ((void*)0))
	{
		elements++;
		begin_list = begin_list->next;
	}
	return (elements);
}
