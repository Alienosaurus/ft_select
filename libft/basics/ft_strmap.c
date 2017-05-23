/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 14:19:33 by adenece           #+#    #+#             */
/*   Updated: 2017/01/30 14:19:35 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*new;

	i = 0;
	if (!(new = ft_strnew(ft_strlen(s))))
		return (NULL);
	ft_strcpy(new, s);
	while (new[i])
	{
		new[i] = f(new[i]);
		i++;
	}
	return (new);
}
