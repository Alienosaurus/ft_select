/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 14:24:10 by adenece           #+#    #+#             */
/*   Updated: 2017/01/30 14:24:11 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*cpy;
	size_t	i;

	if (!(cpy = ft_strnew(len)))
		return (NULL);
	i = 0;
	while (i < len)
		cpy[i++] = s[start++];
	cpy[i] = '\0';
	return (cpy);
}
