/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 14:15:07 by adenece           #+#    #+#             */
/*   Updated: 2017/01/30 14:15:08 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (s1 && s2)
		while (n-- > 0)
		{
			if (*((unsigned char *)s1) != *((unsigned char *)s2))
				return (*((unsigned char *)s1) - *((unsigned char *)s2));
			s1++;
			s2++;
		}
	return (0);
}
