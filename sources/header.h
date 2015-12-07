/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <cchameyr@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 17:07:11 by cchameyr          #+#    #+#             */
/*   Updated: 2015/12/07 21:20:30 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

char	*ft_fdcapteur(char *path);
l_form	ft_getform(char *str);
int		ft_checkarray(l_form begin);
int		ft_checklinkedcase(l_form form);
