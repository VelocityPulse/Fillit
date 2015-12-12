/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   edit_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 15:20:46 by cchameyr          #+#    #+#             */
/*   Updated: 2015/12/11 15:27:18 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int			ft_cptform(t_form *form)
{
	t_form *list;

	if (!form)
		return (0);
	list = form;
	while (list->next)
		list = list->next;
	return (list->index);
}

int			ft_minsize(int nbform)
{
	int		size;

	size = 2;
	while (size * size < nbform * 4)
		size++;
	return (size);
}

t_square	*ft_initsquare(int size)
{
	int y;
	t_square	*square;

	if (!(square = (t_square *)malloc(sizeof(t_square) * size)))
		return (NULL);
	y = 0;
	while (y < size)
	{
		ft_memset(square->array[y], '.', size);
		y++;
	}
	return (square);
}

