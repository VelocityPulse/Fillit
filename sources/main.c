/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <cchameyr@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:26:41 by cchameyr          #+#    #+#             */
/*   Updated: 2015/12/08 03:25:22 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_fillit(char *path)
{
	t_form	*list_form;

	list_form = ft_getform(ft_fdcapteur(path));
	ft_putnbr(ft_formcmp(list_form));
	ft_putchar('\n');
	ft_displaylstform(list_form);
	ft_putstr("error\n");
}

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_fillit(argv[1]);
	else
		ft_putstr("error\n");
	return (0);
}
