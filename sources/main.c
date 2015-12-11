/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <cchameyr@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:26:41 by cchameyr          #+#    #+#             */
/*   Updated: 2015/12/11 16:15:34 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_fdcapture(char *path)
{
	int		fd;
	char	c;
	char	*str;
	t_str	*l_str;

	l_str = NULL;
	str = NULL;
	if ((fd = open(path, O_RDONLY)) < 0)
		return (NULL);
	while (read(fd, &c, 1))
		l_str = ft_addc(l_str, c);
	str = ft_exportstr(l_str);
	ft_freelststr(l_str);
	return (str);
}

int		ft_fillit(char *path)
{
	t_form		*begin_form;
	t_point		pt;
	char		*str;

	pt.x = 0;
	pt.y = 0;
	if (!(str = ft_fdcapture(path)))
		return (0);
	if (!(begin_form = ft_getform(str, pt, 0)))
		return (0);
	if (!(ft_checklistform(begin_form)))
		return (0);
	begin_form = ft_initform(begin_form, pt);
	ft_displaysquare(ft_compact(begin_form, pt, 0));
	ft_displaylist(begin_form, 0, 0);
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (!ft_fillit(argv[1]))
			ft_putstr("error\n");
		else
			ft_putstr("victoire\n");
	}
	else
		ft_putstr("error\n");
	return (0);
}
