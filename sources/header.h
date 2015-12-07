/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <cchameyr@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 17:07:11 by cchameyr          #+#    #+#             */
/*   Updated: 2015/12/08 00:24:29 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

char	*ft_fdcapteur(char *path);
l_form	ft_getform(char *str);
int		ft_checkarray(l_form *form);
int		ft_checklistform(l_form *list_form);
int		ft_checklinkedcase(l_form form);
