/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 14:17:24 by adenece           #+#    #+#             */
/*   Updated: 2017/01/30 14:17:25 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(const char *s)
{
	char	*new;

	if (!s || !(new = ft_strnew(ft_strlen(s))))
		return (NULL);
	return (ft_strcpy(new, s));
}
