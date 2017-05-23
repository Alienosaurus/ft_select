/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 14:26:50 by adenece           #+#    #+#             */
/*   Updated: 2017/01/30 14:26:51 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "dclist.h"

void	ft_dclstdelone(t_dclist **alst, void (*del)(void *, size_t))
{
	if (alst && *alst)
	{
		del((*alst)->data, (*alst)->data_size);
		free(*alst);
		*alst = NULL;
	}
}

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst && *alst)
	{
		del((*alst)->data, (*alst)->data_size);
		free(*alst);
		*alst = NULL;
	}
}
