/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   termwin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/09 14:57:46 by adenece           #+#    #+#             */
/*   Updated: 2017/05/09 14:57:50 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

int			ft_putcharinterr(int i)
{
	char		c;

	c = i;
	ft_putchar_fd(c, FD);
	return (c);
}

void		ft_winsize(t_select *select)
{
	t_winsize	win;

	ioctl(0, TIOCGWINSZ, &win);
	select->maxlin = win.ws_row - 1;
	select->maxcol = win.ws_col / select->len_max;
	ft_clear(select);
	if (!(select->maxcol))
		FT_PUTSTRFD(ANSI_COLOR_RED, "PLEASE RESIZE !!", ANSI_COLOR_RESET, 2);
	else
	{
		ft_print_search(select);
		ft_listprint(select);
	}
	ft_signals();
}

int			ft_termios_handle(t_select *select, int mode)
{
	t_termios	shell;
	static char	state = 'n';

	if (mode && state == 'n')
	{
		if (tcgetattr(STDIN_FILENO, &(select->termios_backup)) == -1
		|| !ft_memcpy(&shell, &(select->termios_backup), sizeof(t_termios)))
			return (0);
		shell.c_lflag &= ~(ICANON | ECHO);
		shell.c_cc[VMIN] = 1;
		shell.c_cc[VTIME] = 0;
		if (tcsetattr(STDIN_FILENO, TCSADRAIN, &shell) == -1)
			return (0);
		state = 'y';
	}
	else if (state == 'y')
	{
		tcsetattr(STDIN_FILENO, TCSANOW, &(select->termios_backup));
		state = 'n';
	}
	return (1);
}
