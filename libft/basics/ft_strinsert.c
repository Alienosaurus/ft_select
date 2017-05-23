/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 14:17:51 by adenece           #+#    #+#             */
/*   Updated: 2017/01/30 14:17:52 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strinsert(char *dest, char *str, char *pos)
{
	char	*res;

	if (pos - dest < 0
		|| !(res = ft_strnew(ft_strlen(dest) + ft_strlen(str))))
		return (NULL);
	res = ft_strncpy(res, dest, pos - dest);
	res = ft_strcat(res, str);
	res = ft_strcat(res, pos);
	return (res);
}
