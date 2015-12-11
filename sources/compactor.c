/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compactor.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 03:40:04 by aperraul          #+#    #+#             */
/*   Updated: 2015/12/11 12:18:46 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"

int				ft_nbform(t_form *form)
{
	t_form	*list;

	if (!form)
		return (0);
	list = form;
	while (list->next)
		list = list->next;
	return (list->index);
}

int				ft_min_size(int nbform)
{
	int		size;

	size = 2;
	while (size * size < nbform * 4)
		size++;
	return (size);
}

t_square		*ft_carre_create(int size)
{
	int y;
	t_square	*square;

	if(!(square = (t_square *)malloc(sizeof(t_square) * size)))
		return (NULL);
	y = 0;
	while (y < size)
	{
		ft_memset(square->array[y], '.' ,size);
		y++;
	}
	return (square);
}

t_square		*ft_compact(t_form *form)
{
	int			x;
	int			y;
	t_square	*square;
	int			size;

	size = ft_min_size(ft_nbform(form));
	square = ft_carre_create(size);
	while (form->next)
	{
		y = 0;
		while (y < size)
		{
			x = 0;
			while (x < size)
		}
		//fonction Put(pour appliquer la piece sur le carre;
		//
	}
}
