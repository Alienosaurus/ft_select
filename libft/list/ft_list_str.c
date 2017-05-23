/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 14:26:34 by adenece           #+#    #+#             */
/*   Updated: 2017/01/30 14:26:35 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_list_strlen(t_list *begin)
{
	size_t	len;

	len = 0;
	while (begin)
	{
		if (begin->data)
			len += ft_strlen((char *)begin->data);
		begin = begin->next;
	}
	return (len);
}
