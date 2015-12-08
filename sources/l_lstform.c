/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_lstform.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <cchameyr@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 00:32:45 by cchameyr          #+#    #+#             */
/*   Updated: 2015/12/08 02:20:01 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"

t_form	*ft_addform(t_form *begin, char *str)
{
	t_form	*list;
	int		index;

	list = begin;
	index = 1;
	if (!list)
	{
		while (list->next)
		{
			list = list->next;
			index++;
		}
		list->next = ft_newform();
		list = list->next;
		list->str = str;
		list->index = index;
		return (begin);
	}
	list = ft_newform();
	list->str = str;
	list->index = 1;
	return (list);
}

t_form	*ft_newform(void)
{
	t_form	*list;

	list = (t_form *)malloc(sizeof(t_form));
	list->next = NULL;
	list->str = NULL;
	list->index = 0;
	return (list);
}

void	ft_displaylstform(t_form *begin)
{
	if (!begin)
		return ;
	while (begin->next)
	{
		ft_putstr(begin->str);
		ft_putchar('\n');
		begin = begin->next;
	}
	ft_putstr(begin->str);
	ft_putchar('\n');
}

int		ft_formcmp(t_form *begin)
{
	if (!begin)
		return (0);
	while (begin->next)
		begin = begin->next;
	return (begin->index);
}
