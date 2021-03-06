/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 14:25:26 by adenece           #+#    #+#             */
/*   Updated: 2017/01/30 14:25:27 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "dclist.h"

t_dclist		*ft_dclist_find(t_dclist *begin_list, void *data_ref,
				int (*cmp)())
{
	t_dclist *memo;

	memo = begin_list;
	if ((*cmp)(begin_list->data, data_ref) == 0)
		return (begin_list);
	begin_list = begin_list->next;
	while (begin_list && memo != begin_list)
	{
		if ((*cmp)(begin_list->data, data_ref) == 0)
			return (begin_list);
		begin_list = begin_list->next;
	}
	return (NULL);
}

t_list			*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	while (begin_list)
	{
		if ((*cmp)(begin_list->data, data_ref) == 0)
			return (begin_list);
		begin_list = begin_list->next;
	}
	return (NULL);
}
