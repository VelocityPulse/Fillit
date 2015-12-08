/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_from.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 04:04:30 by aperraul          #+#    #+#             */
/*   Updated: 2015/12/08 05:55:43 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"

t_form		*ft_newform(int index)
{
	int		y;
	t_form	*list;

	y = 0;
	if (!(list = (t_form *)malloc(sizeof(t_form))))
		return (NULL);
	while (list->shape[y])
	{
		ft_bzero(list->shape[y], 4);
		y++;
	}
	list->index = index;
	list->next = NULL;
	return (list);
}

t_form		*ft_addform(t_form *begin)
{
	t_form	*list;
	int		index;

	list = begin;
	index = 1;
	if (!list)
		list = ft_newform(index);
	else
	{
		while (list->next)
		{
			list = list->next;
			index++;
		}
		list->next = ft_newform(index);
	}
	return (begin);
}

void	ft_displayform(t_form *begin)
{
	t_form	*list;
	int		y;

	if (!begin)
		return ;
	list = begin;
	while (list->next)
	{
		y = 0;
		while (y < 4)
		{
			ft_putstr(list->shape[y]);
			list = list->next;
			y++;
		}
	}
	ft_putstr(list->shape[y]);
}
