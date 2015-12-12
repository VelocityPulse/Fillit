/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_form.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 04:04:30 by aperraul          #+#    #+#             */
/*   Updated: 2015/12/11 14:06:08 by cchameyr         ###   ########.fr       */
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

void	ft_displaylist(t_form *begin, int x, int y)
{
	t_form	*list;

	if (!begin)
		return ;
	list = begin;
	while (list)
	{
		y = 0;
		while (y < 4)
		{
			x = 0;
			while (x < 4)
			{
				if (list->shape[y][x] == '#')
					ft_putchar(list->index + 64);
				else
					ft_putchar(list->shape[y][x]);
				x++;
			}
			y++;
			ft_putchar('\n');
		}
		ft_putchar('\n');
		list = list->next;
	}
}

void	ft_displayform(t_form *form, int x, int y)
{
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if (form->shape[y][x] == '#')
				ft_putchar(form->index + 64);
			else
				ft_putchar('.');
			x++;
		}
		y++;
		ft_putchar('\n');
	}
	ft_putchar('\n');
}
