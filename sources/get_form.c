/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_form.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <cchameyr@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 04:19:27 by cchameyr          #+#    #+#             */
/*   Updated: 2015/12/11 12:02:31 by cchameyr         ###   ########.fr       */
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
}

t_form	*ft_initform(t_form *begin_form)
{
	t_form *form;

	form = begin_form;
	while (form->next)
	{
		form = ft_voidline(form, 0, 0);
		form = ft_voidcolon(form, 0, 0);
	}
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

char	*ft_fdcapture(char *path)
{
	int		fd;
	char	c;
	char	*str;
	t_str	*l_str;

	l_str = NULL;
	str = NULL;
	if ((fd = open(path, O_RDONLY)) < 0)
		return (NULL);
	while (read(fd, &c, 1))
		l_str = ft_addc(l_str, c);
	str = ft_exportstr(l_str);
	ft_freelststr(l_str);
	return (str);
}
