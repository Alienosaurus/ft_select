/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 14:15:17 by adenece           #+#    #+#             */
/*   Updated: 2017/01/30 14:15:19 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*to;

	to = (unsigned char *)dest;
	if (dest && src)
		while (n-- > 0)
		{
			*to = *((unsigned char *)src);
			src++;
			to++;
		}
	else
		return (NULL);
	return (dest);
}
