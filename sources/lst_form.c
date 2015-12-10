/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_form.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 04:04:30 by aperraul          #+#    #+#             */
/*   Updated: 2015/12/10 15:29:19 by cchameyr         ###   ########.fr       */
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
	while (y < 4)
	{
		ft_bzero(list->shape[y], 4);
		y++;
	}
	list->index = index;
	list->next = NULL;
	return (list);
}

void	ft_displayform(t_form *begin)
{
	t_form	*list;
	int		y;
	int		x;

	if (!begin)
		return ;
	list = begin;
	while (list->next)
	{
		y = 0;
		while (y < 4)
		{
			x = 0;
			while (x < 4)
			{
				ft_putchar(list->shape[y][x]);
				x++;
			}
			y++;
			ft_putchar('\n');
		}
		ft_putchar('\n');
		list = list->next;
	}
	ft_putstr(list->shape[y]);
}
