/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <cchameyr@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:26:41 by cchameyr          #+#    #+#             */
/*   Updated: 2015/12/08 04:28:24 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_fillit(char *path)
{
	t_form	*list_form;
	char	*str;

	if (!(str = ft_fdcapteur(path)))
		return ;
	list_form = ft_getform(str, 0, 0, 0);
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
