/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_from.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 04:04:30 by aperraul          #+#    #+#             */
/*   Updated: 2015/12/08 04:50:01 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"

t_form		*ft_newform(t_form *begin)
{
	int		x;
	int		y;

	t_form	*list;
	list = (t_form *)malloc(sizeof(t_form));
	if (!list)
		return (NULL);
	if (!begin)
		begin = list;
	else
	{
		while (begin->next)
			begin = begin->next;
		begin->next = list;
	}
	list->next = NULL;
	list->index = 0;
	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 5)
		{
			list->shape[y][x] = '.';
			x++;
		}
		if (x == 5)
			list->shape[y][x] = '\n';
		y++;
	}
	x = 0;
	while (x < 5)
	{
		list->shape[y][x] = '.';
		x++;
	}
	list->shape[y][x] = '\0';
	return (begin);
}

t_form		*ft_addfrom(t_form *begin, char *str)
{
	t_form	*list;
	int		i;
	int		x;
	int		y;

	list = begin;
	if(!list)
		list = ft_newform(NULL);
	while (list->next)
		list = list->next;
	if (str)
	{
		i = 0;
		y = 0;
		while (str[i] && y <= 4)
		{
			x = 0;
			while (str[i] && x <= 5)
			{
				list->shape[y][x] = str[i];
				i++;
				x++;
			}
			y++;
		}
	}
	return (begin);
}

void	ft_displayform(t_form *begin)
{
	t_form	*list;
	int		x;
	int		y;

	if (!begin)
		return ;
	if (list->next)
	{
		while (list->next)
		{
			y = 0;
			while (y <= 4)
				{
					x = 0;
					while (x <= 5)
					{
						ft_putchar(list->shape[y][x]);
						x++;
					}
					y++;
				}
			list = list->next;
		}
	}
	return ;
}
