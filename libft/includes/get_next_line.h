/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 14:09:31 by adenece           #+#    #+#             */
/*   Updated: 2017/01/30 14:09:48 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# define BUFF_SIZE 511
# define MALLOC (t_line *)ft_memalloc(sizeof(t_line))
# define RET begin->ret
# define DATA begin->data
# define READ 0
# define FIND 1

typedef struct		s_line
{
	char			data[BUFF_SIZE + 1];
	int				ret;
	int				fd;
	struct s_line	*next;
}					t_line;

int					get_next_line(int const fd, char **line);
#endif
