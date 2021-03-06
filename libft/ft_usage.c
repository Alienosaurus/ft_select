/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 14:08:26 by adenece           #+#    #+#             */
/*   Updated: 2017/01/30 14:08:28 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_usage(char *name, char *usage)
{
	ft_putstr(name);
	ft_putstr(" : usage : ");
	ft_putstr(usage);
	ft_exit(0);
}
