/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrtab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 14:08:15 by adenece           #+#    #+#             */
/*   Updated: 2017/01/30 14:08:16 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrtab_fd(char **s, char c, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putstr_fd(s[i], fd);
		if (s[i + 1])
			ft_putchar_fd(c, fd);
		++i;
	}
}

void	ft_putstrtab(char **s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putstr(s[i]);
		if (s[i + 1])
			ft_putchar(c);
		++i;
	}
}
