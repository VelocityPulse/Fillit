/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_str.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 17:03:45 by aperraul          #+#    #+#             */
/*   Updated: 2015/12/08 00:28:36 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"
#include <stdlib.h>

l_str	*ft_addstr(l_str *begin, char *str)
{
	l_str	*list;
	int		i;

	list = begin;
	if (!list)
		list = ft_newlstr(NULL);
	while (list->next)
		list = list->next;
	if (str)
	{
		i = 0;
		while (str[i])
		{
			if (list->index < 32)
			{
				list->index = str[i];
				list->index++;
				i++;
			}
			else
			{
				list->next = ft_newlstr(list);
				list = list->next;
			}
		}
	}
	return (begin);
}


l_str	*ft_addc(l_str *begin, char c) 
{
	l_str	*list;

	list = begin;
	if(!list)
		list = ft_newlstr(NULL);
	while (list->next)
		list = list->next;
	if (c)
	{
		if (list->index < 32)
		{
			list->index = c;
			list->index++;
		}
		else
		{
			list->next = ft_newlstr(list);
			list = list->next;
			list->index = c;
			list->index++;
		}
	}
	return (begin);
}

l_str	*ft_newlstr(l_str *begin)
{
	l_str	*list;

	list = (l_str *)malloc(sizeof(l_str));
	if (!begin)
		begin = list;
	else
	{
		while (begin->next)
			begin = begin->next;
		begin->next = list;
	}
	list->next = NULL;
	list->index = 0;
	ft_bzero(list->str, 32);
	return (begin);
}

int		ft_indexcpt(l_str *begin)
{
	int		i;
	l_str	*list;

	if(!begin)
		return (0);
	list = begin;
	i = 0;
	if (list->next)#
	{
		while (list->next)
		{
			i += list->index;
			list = list->next;
		}
	}
	while (list->str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_freelststr(l_str *begin)
{
	l_str	*list;

	if (begin)
	{
		while (list->next)
		{
			free(list);
			list->next
		}
	}
}
