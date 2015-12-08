/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <cchameyr@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 17:07:11 by cchameyr          #+#    #+#             */
/*   Updated: 2015/12/08 09:33:40 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft.h"
# include "structs.h"

char	*ft_fdcapture(char *path);
t_form	*ft_getform(char *str, int x, int y, int i);

int		ft_checklinkedform(t_form *form, int x, int y);
int		ft_checklinkedfirstline(t_form *form, int x, int y);
int		ft_checklinkedlastline(t_form *form, int x, int y);
int		ft_checklinkedmiddle(t_form *form, int x, int y);

int		ft_checkarray(t_form *form);
int		ft_checklistform(t_form *form);

#endif
