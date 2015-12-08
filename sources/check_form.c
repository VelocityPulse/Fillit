/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_form.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <cchameyr@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 04:19:13 by cchameyr          #+#    #+#             */
/*   Updated: 2015/12/08 07:01:13 by cchameyr         ###   ########.fr       */
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
	if (x > 0)
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
	if (x > 0)
	{
		if (form->shape[])
	}
}

int		ft_checklinkedform(t_form *form, int x, int y)
{
	int	match;

	match = 0;
	while (y < 4)
	{
		while (x < 4)
		{
			if (y == 0)
				match += ft_checklinkedfirstline(form, x, y);
			else
				match += ft_checklinked
		}
		y++;
	}
}

int		ft_checkarray(t_form *form)
{
	int x;
	int y;
	int	sharp;

	x = 0;
	y = 0;
	sharp = 0;
	while (y < 4)
	{
		while (x < 5)
		{
			if (form->shape[y][x] != '#' && form->shape[y][x] != '.' &&
				form->shape[y][x] != '\n')
				return (0);
			if (form->shape[y][x] == '#')
				sharp++;
			x++;
		}
		x = 0;
		y++;
	}
	if (sharp == 4)
		return (1);
	return (0);
}

int		ft_checklistform(t_form *list_form)
{
	t_form form;

	if (!list_form)
		return 0;
	form = list_form;
	while (form->next)
	{
		if (ft_checkarray(form))
		{
			if (!(ft_checklinkedform(form, 0, 0)))
				return (0);
		}
		else
			return (0);
		form = form->next;
	}
	if (ft_checkarray(form))
	{
		if (!(ft_cheklinkedform(form, 0, 0)))
			return (0);
	}
	return (1);
}
