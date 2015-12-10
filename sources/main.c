/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <cchameyr@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:26:41 by cchameyr          #+#    #+#             */
/*   Updated: 2015/12/10 16:40:12 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_fillit(char *path)
{
	t_form	*list_form;
	char	*str;

	if (!(str = ft_fdcapture(path)))
		return (0);
	if (!(list_form = ft_getform(str, 0, 0, 0)))
		return (0);
	if (!(ft_checklistform(list_form)))
		return (0);
	ft_displayform(list_form, 0, 0);
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
