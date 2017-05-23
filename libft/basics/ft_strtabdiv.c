/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtabdiv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 14:22:49 by adenece           #+#    #+#             */
/*   Updated: 2017/01/30 14:22:51 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strtabdiv(char **tab, char *needle)
{
	char	**div;
	int		i;

	if (!tab | !*tab || !needle || !*needle)
		return (NULL);
	i = -1;
	div = tab;
	while (div[++i])
		if (!ft_strcmp(div[i], needle))
			break ;
	if (!div[i])
		return (NULL);
	free(div[i]);
	div[i] = NULL;
	if (!div[++i] || !(div = ft_strtabdup(&(div[i]))))
		return (NULL);
	return (div);
}
