/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compactor.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 03:40:04 by aperraul          #+#    #+#             */
/*   Updated: 2015/12/11 11:44:33 by aperraul         ###   ########.fr       */
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
	t_square	*carre;

	if(!(carre = (t_square *)malloc(sizeof(t_square) * size)))
		return (NULL);
	carre->next = NULL;
	carre->index = 0;
	y = 0;
	while (y < size)
	{
		ft_memset(carre->shape[y], '.' ,size);
		y++;
	}
	return (carre);
}

t_square		*ft_compact(t_form *form)
{
	t_square	*carre;

	carre = ft_carre_create(ft_min_size(ft_nbform(form)));
	while (form->next)
	{
		//ckeck de la piece avec les emplacements possible;
		////(avec prio haut-gauche)
		//fonction Put(pour appliquer la piece sur le carre;
		//
	}
}
