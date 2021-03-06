/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtabadd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 14:22:40 by adenece           #+#    #+#             */
/*   Updated: 2017/01/30 14:22:42 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_strtablen(char **t)
{
	int		i;

	if (!t)
		return (-1);
	i = 0;
	while (t[i])
		i++;
	return (i);
}

char	**ft_strncmptabdel(char **dest, char *needle)
{
	int		i;

	if ((i = ft_strtabifindstart(dest, needle)) < 0)
		return (NULL);
	free(dest[i]);
	dest[i] = dest[i + 1];
	while (dest[++i])
		dest[i] = dest[i + 1];
	return (dest);
}

char	**ft_strstrtabdel(char **dest, char *needle)
{
	int		i;

	if ((i = ft_strtabifind(dest, needle)) < 0)
		return (NULL);
	free(dest[i]);
	dest[i] = dest[i + 1];
	while (dest[++i])
		dest[i] = dest[i + 1];
	return (dest);
}

char	**ft_strtabadd(char **dest, char *new)
{
	int		i;
	char	**res;

	i = 0;
	res = NULL;
	if (!dest && !(res = (char **)ft_memalloc(sizeof(char *) * 2)))
		return (NULL);
	else if (!res && ((i = ft_strtablen(dest)) < 0
		|| !(res = (char **)ft_memalloc(sizeof(char *) * (i + 2)))))
		return (NULL);
	res[i] = new;
	while (--i >= 0)
		res[i] = dest[i];
	return (res);
}

char	**ft_strtabadd_free(char **dest, char *new)
{
	char	**kill;

	kill = dest;
	dest = ft_strtabadd(dest, new);
	ft_freegiveone((void**)&kill);
	return (dest);
}
