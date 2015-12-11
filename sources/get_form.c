/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_form.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <cchameyr@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 04:19:27 by cchameyr          #+#    #+#             */
/*   Updated: 2015/12/11 12:25:37 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_form	*ft_voidline(t_form *form, int x, int y)
{
	while (y < 4)
	{
		while (x < 4)
		{
			if (form->shape[y][x] == '#')
				return (form);
			x++;
			if (x == 4)
			{
				while (y < 4)
				{
					x = 0;
					y++;
					while (x++ < 4)
						form->shape[y - 1][x] = form->shape[y][x];
				}
				y = 0;
			}
		}
		y++;
	}
	return (NULL);
}

t_form *ft_voidcolon(t_form * form, int x, int y)
{
	while (x < 4)
	{
		while (y < 4)
		{
			if (form->shape[x][y] == '#')
				return (form);
			y++;
			if (y == 4)
			{
				while (x < 4)
				{
					y = 0;
					x++;
					while (y++ < 4)
						form->shape[y][x - 1] = form->shape[y][x];
				}
				x = 0;
			}
		}
		x++;
	}
	return (NULL);
}

t_form	*ft_initform(t_form *begin_form, int x, int y)
{
	t_form *form;

	form = begin_form;
	while (form)
	{
		form = ft_voidline(form, 0, 0);
		form = ft_voidcolon(form, 0, 0);
		while (y < 4)
		{
			while (x < 4)
			{
				if (form->shape[x][y] != '#')
					form->shape[x][y] = 0;
				x++;
			}
			y++;
		}
		form = form->next;
	}
	return (form);
}

t_form	*ft_getform(char *str, int x, int y, int i)
{
	t_form	*form;
	t_form	*begin;

	begin = ft_newform(1);
	form = begin;
	while (str[i])
	{
		x = 0;
		while (x < 4 && str[i])
		{
			form->shape[y][x] = str[i];
			x++;
			i++;
		}
		i++;
		y++;
		if (y == 4)
		{
			form->next = ft_newform(form->index + 1);
			form = form->next;
			y = 0;
			i++;
		}
	}
	return (i - (5 * form->index + 1) == (form->index * 16) ? NULL : begin);
}
