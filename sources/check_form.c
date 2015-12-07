/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_form.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <cchameyr@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 18:45:42 by cchameyr          #+#    #+#             */
/*   Updated: 2015/12/07 21:19:06 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_checkarray(l_form *form)
{
	int		full_case;
	int		len_line;
	int		i;

	len_lenght = 0;
	i = 0;
	while (form->str[i])
	{
		if (form->str[i] != '#' || form->str[i] != '.' || form->str[i])
			return (0);
		if (form->str[i] == '#')
			full_case++;
		if (form->str[i] == )
	}
}

int		ft_checklistform(l_form *list_form)
{
	t_form	*form;
	int		full_case;
	int		len_line;

	form = list_form;
	len_length = 0;
	while (form->next)
	{
		full_case = 0;
		while (form->str[i])
		{
			if (form->str[i] != '#' || form->str[i] != '.' || form->str[i])
				return (0);
			if (form->str[i] == '#')
				full_case++;
			if (form->str[i] == '\n' && len_lenght != 4)
					return (0);
			len_lenght++;
			i++;
		}
		if (full_case != 4 || !ft_checklinkedcase(form))
			return (0);
	}
}

l_form	*ft_getform(char *str)
{
	l_form	*list_form;
	int		i;
	int		start;

	i = 0;
	start = 0;
	list_form = NULL;
	if (!str)
		return (NULL);
	while (str[i] && str[i + 1])
	{
		if (str[i] == '\n' && str[i + 1] == '\n')
		{
			list_form = ft_newlform(list_form);
			list_form->str = ft_addform(ft_strsub(str, start, i - 1));
			start = i + 2;
		}
		i++;
	}
	return (l_form);
}

char	*ft_fdcapteur(char *path)
{
	int		fd;
	int		i;
	char	c;
	t_lstr	*str;

	str = NULL;
	i = 0;
	if (!(fd = open(path, O_RDONLY)))
		return (0);
	while (read(fd, &c, 1))
		str = ft_addc(str, c);
	return (str);
}
