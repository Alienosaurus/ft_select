/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 14:27:38 by adenece           #+#    #+#             */
/*   Updated: 2017/01/30 14:27:39 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dclist	*ft_dclstnew(void *data, size_t data_size)
{
	t_dclist	*new;

	if (!(new = (t_dclist *)malloc(sizeof(t_dclist))))
		return (NULL);
	ft_bzero(new, sizeof(t_dclist));
	if (data)
	{
		new->data_size = data_size;
		new->data = data;
	}
	return (new);
}

t_list		*ft_lstnew(void *data, size_t data_size)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	ft_bzero(new, sizeof(t_list));
	if (data)
	{
		new->data_size = data_size;
		new->data = data;
	}
	new->next = NULL;
	return (new);
}
