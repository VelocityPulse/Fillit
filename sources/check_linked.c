/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_linked.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <cchameyr@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 07:21:21 by cchameyr          #+#    #+#             */
/*   Updated: 2015/12/08 07:40:01 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_checklinkedfirstline(t_form *form, int x, int y)
{
	int match;

	match = 0;
	if (x == 0)
	{
		if (form->shape[y + 1][x] == '#')
			match++;
		if (form->shape[y][x + 1] == '#')
			match++;
	}
	else if (x > 0)
	{
		if (form->shape[y + 1][x] == '#')
			match++;
		if (form->shape[y][x - 1] == '#')
			match++;
		if (form->shape[y][x + 1] == '#')
			match++;
	}
	return (match);
}

int		ft_checklinkedlastline(t_form *form, int x, int y)
{
	int match;

	match = 0;
	if (x == 0)
	{
		if (form->shape[y - 1][x] == '#')
			match++;
		if (form->shape[y][x + 1] == '#')
			match++;
	}
	else if (x > 0)
	{
		if (form->shape[y - 1][x] == '#')
			match++;
		if (form->shape[y][x + 1] == '#')
			match++;
		if (form->shape[y][x - 1] == '#')
			match++;
	}
	return (match);
}

int		ft_checklinkedmiddle(t_form *form, int x, int y)
{
	int match;

	match = 0;
	if (x == 0)
	{
		if (form->shape[y - 1][x] == '#')
			match++;
		if (form->shape[y + 1][x] == '#')
			match++;
		if (form->shape[y][x + 1] == '#')
			match++;
	}
	else if (x > 0)
	{
		if (form->shape[y - 1][x] == '#')
			match++;
		if (form->shape[y + 1][x] == '#')
			match++;
		if (form->shape[y][x - 1] == '#')
			match++;
		if (form->shape[y][x + 1] == '#')
			match++;
	}
	return (match);
}

int		ft_checklinkedform(t_form *form, int x, int y)
{
	int	match;

	match = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if (form->shape[y][x] == '#')
			{
				if (y == 0)
					match += ft_checklinkedfirstline(form, x, y);
				else if (y == 3)
					match += ft_checklinkedlastline(form, x, y);
				else
					match += ft_checklinkedmiddle(form, x, y);
			}
			x++;
		}
		y++;
	}
	if (match == 4 || match == 8)
		return (1);
	return (0);
}
