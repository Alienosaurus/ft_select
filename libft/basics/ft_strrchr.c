/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 14:21:34 by adenece           #+#    #+#             */
/*   Updated: 2017/01/30 14:21:35 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = NULL;
	if (c == 0)
		return ((char *)(s + ft_strlen(s)));
	s = ft_strchr(s, c);
	if (!s)
		return (NULL);
	while (s)
	{
		p = (char *)s;
		s = ft_strchr(s + 1, c);
	}
	return (p);
}
