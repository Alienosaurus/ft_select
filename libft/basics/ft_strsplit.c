/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 14:21:56 by adenece           #+#    #+#             */
/*   Updated: 2017/01/30 14:22:07 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**add_tab(char **tab, int size_tab)
{
	char	**new_tab;

	if (!(new_tab = (char**)malloc(sizeof(char*) * (size_tab + 1))))
		return (0);
	new_tab[size_tab] = NULL;
	if (size_tab == 1)
		return (new_tab);
	size_tab -= 2;
	while (size_tab >= 0)
	{
		new_tab[size_tab] = ft_strdup(tab[size_tab]);
		free(tab[size_tab]);
		size_tab--;
	}
	return (new_tab);
}

char			**ft_strsplit(char *s, char c)
{
	char	**tab;
	char	**tabdup;
	int		size;
	int		size_tab;

	tab = NULL;
	size_tab = 0;
	while (*s)
	{
		while (!(size = ft_strlenc((char*)s, c)))
			s++;
		if (size == -1)
			return (tab);
		tabdup = tab;
		tab = add_tab(tab, ++size_tab);
		if (size_tab > 1)
			free(tabdup);
		tab[size_tab - 1] = ft_strncpy(ft_strnew(size), s, size);
		s += size;
	}
	return (tab);
}
