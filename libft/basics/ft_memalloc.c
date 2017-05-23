/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 14:14:38 by adenece           #+#    #+#             */
/*   Updated: 2017/01/30 14:14:39 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*p;
	size_t	i;

	if (!(p = (void *)malloc(sizeof(char) * size)))
		return (NULL);
	i = -1;
	while (++i < size)
		((char *)p)[i] = 0;
	return (p);
}
