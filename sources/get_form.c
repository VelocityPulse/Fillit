/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_form.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <cchameyr@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 04:19:27 by cchameyr          #+#    #+#             */
/*   Updated: 2015/12/08 09:39:23 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_form	*ft_getform(char *str, int x, int y, int i)
{
	t_form	*form;
	t_form	*begin_form;

	begin_form = ft_addform(begin_form);
	form = begin_form;
	while (str[i])
	{
		if (x < 4)
		{
			form->shape[y][x] = str[i];
			x++;
		}
		else
			y++;
		if (y == 4)
		{
			form = ft_addform(begin_form);
			y = 0;
			x = 0;
			i++;
		}
		i++;
	}
	return (i == (form->index * 20) + 1 ? begin_form : NULL);
}

char	*ft_fdcapture(char *path)
{
	int		fd;
	char	c;
	char	*str;
	t_str	*l_str;

	l_str = NULL;
	if ((fd = open(path, O_RDONLY)) < 0)
		return (NULL);
	while (read(fd, &c, 1))
		l_str = ft_addc(l_str, c);
	str = ft_exportstr(l_str);
	ft_freelststr(l_str);
	return (str);
}
