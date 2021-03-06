/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strslashjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 14:21:47 by adenece           #+#    #+#             */
/*   Updated: 2017/01/30 14:21:48 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchrjoin(char *s1, char c, char *s2)
{
	char	*new;

	if (!s1 || !s2 || !(*s1) || !(*s2))
		return (NULL);
	new = (char *)ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 2);
	new = ft_strcpy(new, s1);
	new[ft_strlen(new)] = c;
	new = ft_strcat(new, s2);
	return (new);
}

char	*ft_strslashjoin(char *s1, char *s2)
{
	char	*new;

	if (!s1 || !s2 || !(*s1) || !(*s2))
		return (NULL);
	new = (char *)ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 2);
	new = ft_strcpy(new, s1);
	new = ft_strcat(new, "/");
	new = ft_strcat(new, s2);
	return (new);
}
