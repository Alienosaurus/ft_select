/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtabdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 14:22:58 by adenece           #+#    #+#             */
/*   Updated: 2017/01/30 14:23:00 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strtabdup(char **src)
{
	size_t	i;
	char	**dest;

	i = ft_strtablen(src);
	if (!(dest = (char **)ft_memalloc(sizeof(char *) * (i + 1))))
		return (NULL);
	while (i--)
		if (!(dest[i] = ft_strdup(src[i])))
		{
			while (dest[++i])
				free(dest[i]);
			free(dest);
			return (NULL);
		}
	return (dest);
}
