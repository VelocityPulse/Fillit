/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_form.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <cchameyr@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 04:19:13 by cchameyr          #+#    #+#             */
/*   Updated: 2015/12/08 04:41:57 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_checkarray(t_form *form)
{
	
}

int		ft_checklistform(t_form *list_form)
{
	t_form form;

	if (!list_form)
		return 0;
	form = list_form;
	while (form->next)
	{
		if (ft_checkarray(form))
		{
			if (!(ft_checklinkedform(form)))
				return (0);
		}
		else
			return (0);
		form = form->next;
	}
	if (ft_checkarray(form))
	{
		if (!(ft_cheklinkedform(form)))
			return (0);
	}
	return (1);
}
