/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 14:07:41 by adenece           #+#    #+#             */
/*   Updated: 2017/01/30 14:07:42 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *s)
{
	write(1, s, ft_strlen(s));
}

void	ft_putstr_nbr_str(char *str, int nbr, char *tab)
{
	if (str)
		ft_putstr(str);
	ft_putnbr(nbr);
	if (tab)
		ft_putstr(tab);
}
