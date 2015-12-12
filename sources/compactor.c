/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compactor.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 03:40:04 by aperraul          #+#    #+#             */
/*   Updated: 2015/12/12 16:29:53 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int			ft_checkarea(t_square *sqr, t_point f_pt, t_point s_pt, int size)
{
	if ((f_pt.x + s_pt.x < size && f_pt.y + s_pt.y < size) &&
			sqr->array[s_pt.y][s_pt.x] != '.')
		return (1);
	else
		return (0);
}

int			ft_checking(t_form *form, t_square *square, t_point s_pt, int size)
{
	t_point f_pt;

	f_pt.y = 0;
	while (f_pt.y < 4)
	{
		f_pt.x = 0;
		while (f_pt.x < 4)
		{
			if (form->shape[f_pt.y][f_pt.x] == '#')
			{
				if (!ft_checkarea(square, f_pt, s_pt, size))
					return (0);
				f_pt.x++;
				s_pt.x++;
			}
			else
			{
				f_pt.x++;
				s_pt.x++;
			}
		}
		f_pt.y++;
		s_pt.y++;
	}
	return (1);
}

t_square	*ft_applyform(t_square *square, t_form *form, t_point s_pt)
{
	t_point f_pt;

	f_pt.y = 0;
	while (f_pt.x < 4)
	{
		f_pt.x = 0;
		while (f_pt.x < 4)
		{
			if (form->shape[f_pt.y][f_pt.x] == '#')
				square->array[s_pt.y][s_pt.x] = form->shape[f_pt.y][f_pt.x];
			f_pt.x++;
			s_pt.x++;
		}
		f_pt.y++;
		s_pt.y++;
	}
	return (square);
}

t_square	*ft_compact(t_square sqr, t_form *form, t_point s_pt, int size)
{
	size = ft_minsize(ft_cptform(form));
	sqr = ft_initsquare(size);
	s_pt.y = 0;
	if (form)
	{
		while (s_pt.y < size)
		{
			s_pt.x = 0;
			while (s_pt.x < size)
			{

				if (ft_checking(form, sqr, s_pt, size))
				{
					if (!(form->next))
						return (ft_applyform(sqr, form, s_pt));
					else
						sqr = ft_compact(ft_applyform(sqr, form, s_pt), form->next, s_pt, size);
				}
				else
					s_pt.x++;
			}
			s_pt.y++;
		}
	}
	if (form->index == 1)
		return (NULL);
	return (NULL);
}
