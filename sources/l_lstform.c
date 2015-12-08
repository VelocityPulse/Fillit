/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_lstform.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <cchameyr@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 00:32:45 by cchameyr          #+#    #+#             */
/*   Updated: 2015/12/08 01:46:55 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"

l_form	*ft_addform(l_form *begin, char *str)
{
	l_form	*list;
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
	return (list)
}

l_form	*ft_newform(void)
{
	l_form	*list;

	list = (l_list *)malloc(sizeof(l_list));
	list->next = NULL;
	list->str = NULL;
	list->index = 0;
	return (list);
}

void	ft_displaylstform(l_form *begin)
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

int		ft_formcmp(l_form *begin)
{
	if (!begin)
		return (0);
	while (begin->next)
		begin = begin->next;
	return (begin->index);
}
