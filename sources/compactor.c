/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compactor.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 03:40:04 by aperraul          #+#    #+#             */
/*   Updated: 2015/12/08 04:03:23 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"

int		ft_nbform(t_form *form)
{
	int		i;
	t_form	*list;

	if (!form)
		return (0);
	list = form;
	while (list->next)
		list = list->next;
	i = list->index;
	return (i);
}

ft_min_size

//ft_compact(t_form *form)
//{
//	ft_min_size(ft_nbform(form));
//}
