/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtabfind.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 14:23:11 by adenece           #+#    #+#             */
/*   Updated: 2017/01/30 14:23:12 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strtabifindstart(char **tab, char *needle)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(needle);
	while (tab && tab[i])
	{
		if (!ft_strncmp(tab[i], needle, len))
			return (i);
		i++;
	}
	return (-1);
}

int		ft_strtabifind(char **tab, char *needle)
{
	int		i;

	i = 0;
	while (tab[i])
	{
		if (ft_strstr(tab[i], needle))
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_strtabfindstart(char **tab, char *needle)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(needle);
	while (tab[i])
	{
		if (!ft_strncmp(tab[i], needle, len))
			return (tab[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strtabfind(char **tab, char *needle)
{
	int		i;

	i = 0;
	while (tab[i])
	{
		if (ft_strstr(tab[i], needle))
			return (tab[i]);
		i++;
	}
	return (NULL);
}
