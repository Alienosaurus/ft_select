/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrow_select.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/09 14:52:56 by adenece           #+#    #+#             */
/*   Updated: 2017/05/09 14:52:59 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	ft_nextcoord(t_select *select)
{
	select->pos = select->pos->next;
	(select->collin)++;
	if (select->pos == select->elems)
	{
		select->start = select->elems;
		select->collin = 0;
		ft_tgoto(select, 0, 0);
		ft_winsize(select);
	}
	else if (select->collin == (select->maxcol * select->maxlin))
	{
		while ((select->collin)--)
			if ((select->start = select->start->next) == select->elems)
				break ;
		select->collin = 0;
		ft_winsize(select);
	}
}

void	ft_goprevline(t_select *select)
{
	t_dclist	*rabbit;

	if (select->pos == select->start)
	{
		rabbit = select->pos->prev;
		while (select->pos != rabbit)
			ft_gonextline(select);
	}
	else
	{
		select->pos = select->pos->prev;
		(select->collin)--;
		ft_elemprint(select, select->pos->next);
		ft_tgoto(select, (select->collin / select->maxlin) * select->len_max,
		select->collin % select->maxlin);
		ft_elemprint(select, select->pos);
		ft_tgoto(select, (select->collin / select->maxlin) * select->len_max,
		select->collin % select->maxlin);
	}
}

void	ft_gonextline(t_select *select)
{
	ft_nextcoord(select);
	ft_elemprint(select, select->pos->prev);
	ft_tgoto(select, (select->collin / select->maxlin) * select->len_max,
	select->collin % select->maxlin);
	ft_elemprint(select, select->pos);
	ft_tgoto(select, (select->collin / select->maxlin) * select->len_max,
	select->collin % select->maxlin);
}

void	ft_gonextcol(t_select *select)
{
	t_ushort	mem;

	mem = select->collin % select->maxlin;
	ft_gonextline(select);
	while (mem != select->collin % select->maxlin)
		ft_gonextline(select);
}

void	ft_goprevcol(t_select *select)
{
	t_ushort	mem;

	mem = select->collin;
	ft_goprevline(select);
	while (mem % select->maxlin != select->collin % select->maxlin)
		ft_goprevline(select);
}
