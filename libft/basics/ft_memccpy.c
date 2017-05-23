/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 14:14:47 by adenece           #+#    #+#             */
/*   Updated: 2017/01/30 14:14:48 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n-- > 0)
	{
		*((unsigned char *)dest) = *((unsigned char *)src);
		if (*((unsigned char *)src) == (unsigned char)c)
			return (dest + 1);
		src++;
		dest++;
	}
	return (NULL);
}
