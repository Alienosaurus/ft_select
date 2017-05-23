/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_select.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/09 14:53:45 by adenece           #+#    #+#             */
/*   Updated: 2017/05/09 14:53:48 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	ft_escape_select(t_select *select)
{
	if (select->elems)
		ft_dclstdel(&(select->elems), &ft_freedata);
	select->elems = NULL;
	ft_exit_init(select, NULL);
}

void	ft_freedata(void *data, size_t size)
{
	(void)data;
	(void)size;
}

void	ft_print_freedata(void *data, size_t size)
{
	if (size & 1)
	{
		ft_putstr(((char *)data));
		ft_putchar(' ');
	}
}

void	ft_exit_init(t_select *select, char *err)
{
	ft_clear(select);
	ft_tgoto(select, 0, 0);
	ft_termios_handle(select, 0);
	ft_prepcursor(select, 0);
	if (select->term)
		free(select->term);
	if (err)
		FT_PUTSTRFD("ft_select: init error: ", err, "\n", 2);
	if (select->elems)
	{
		ft_dclstdel(&(select->elems), &ft_print_freedata);
		ft_putchar('\n');
	}
	if (err)
		exit(1);
	exit(0);
}
