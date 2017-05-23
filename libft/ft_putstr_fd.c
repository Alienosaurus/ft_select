/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 14:08:02 by adenece           #+#    #+#             */
/*   Updated: 2017/01/30 14:08:03 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

void	ft_putstr_str_str_fd(char *name, char *file,
		char *error, int fd)
{
	if (name)
		ft_putstr_fd(name, fd);
	if (file)
		ft_putstr_fd(file, fd);
	if (error)
		ft_putstr_fd(error, fd);
}
