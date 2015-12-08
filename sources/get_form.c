/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_form.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <cchameyr@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 04:19:27 by cchameyr          #+#    #+#             */
/*   Updated: 2015/12/08 05:22:21 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_form	*ft_getform(char *str, int x, int y, int i)
{
	t_form	*form;
	t_form	*begin_form;

	begin_form = ft_newform(NULL);
	form = begin_form;
	while (str[i])
	{
		if (x <= 4)
		{
			form->shape[y][x] = str[i];
			x++;
		}
		else
			y++;
		if (y == 5)
		{
			form = ft_newform(begin_form);
			y = 0;
			x = 0;
			i++;
		}
		i++;
	}
	if (i == (form->index * 20) + 1)
		return (begin_form);
	return (NULL)
}

char	*ft_dscapture(char *path)
{
	int		fd;
	char	c;
	char	*str;
	t_str	l_str;

	if ((fd = open(path, O_RDONLY) < 0))
		return (0);
	while (read(fd, &c, 1))
		l_str = ft_addc(l_str, c);
	str = ft_exportstr(l_str);
	ft_freelststr(l_str);
	return (str);
}
