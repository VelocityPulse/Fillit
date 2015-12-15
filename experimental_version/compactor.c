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



int			ft_checkarea(t_square sqr, t_point f_pt, t_point s_pt)
{
	if ((s_pt.x < sqr.size) && (s_pt.y < sqr.size) &&
			sqr.array[s_pt.y][s_pt.x] == '.')
			return (1);
	return (0);
}

int			ft_checking(t_form *form, t_square sqr, t_point s_pt)
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
				if (!ft_checkarea(sqr, f_pt, s_pt))
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
		s_pt.x = (unsigned int)(s_pt.x - f_pt.x);
	}
	return (1);
}

t_square	ft_apf(t_square square, t_form *form, t_point s_pt)
{
	t_point f_pt;

	f_pt.y = 0;
	while (f_pt.y < 4)
	{
		f_pt.x = 0;
		while (f_pt.x < 4)
		{
			if (form->shape[f_pt.y][f_pt.x] == '#')
				square.array[s_pt.y][s_pt.x] = form->index + 64;
			f_pt.x++;
			s_pt.x++;
		}
		f_pt.y++;
		s_pt.y++;
		s_pt.x = (unsigned int)(s_pt.x - f_pt.x);
	}
	ft_displaysquare(square, 0, 0, 7);
	return (square);
}

t_square	ft_compct(t_square sqr, t_form *form, t_point s_pt)
{
	t_square temp;

	if (form)
	{
		s_pt.y = 0;
		while (s_pt.y < sqr.size)
		{
			s_pt.x = 0;
			while (s_pt.x < sqr.size)
			{
				if (ft_checking(form, sqr, s_pt))
				{
					if (!(form->next))
						return (ft_apf(sqr, form, s_pt));
					sqr.fault = 0;
					temp = sqr;
					sqr = ft_compct(ft_apf(sqr, form, s_pt), form->next, s_pt);
					if (sqr.fault == 1)
						sqr = temp;
					else
						return (sqr);
				}
				s_pt.x++;
			}
			s_pt.y++;
		}
	}
	if (form->index == 1)
	{
		sqr.sizeout = 1;
		return (sqr);
	}
	sqr.fault = 1;
	return (sqr);
}
