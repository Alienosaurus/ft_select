/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 14:14:57 by adenece           #+#    #+#             */
/*   Updated: 2017/01/30 14:14:59 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (s)
		while (n-- > 0)
		{
			if ((unsigned char)c == *((unsigned char *)s))
				return ((void *)s);
			s++;
		}
	return (NULL);
}
