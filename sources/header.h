/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchameyr <cchameyr@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 17:07:11 by cchameyr          #+#    #+#             */
/*   Updated: 2015/12/11 16:45:04 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft.h"
# include "structs.h"

char		*ft_fdcapture(char *path);
int			ft_fillit(char *path);

t_form		*ft_getform(char *str, t_point pt, int i);
t_form		*ft_initform(t_form *begin_form, t_point pt);
t_form		*ft_voidline(t_form *form, t_point pt);
t_form		*ft_voidcolon(t_form *form, t_point pt);

int			ft_checklinkedform(t_form *form, t_point pt);
int			ft_checklinkedfirstline(t_form *form, t_point pt);
int			ft_checklinkedlastline(t_form *form, t_point pt);
int			ft_checklinkedmiddle(t_form *form, t_point pt);

int			ft_checkarray(t_form *form, t_point pt);
int			ft_checklistform(t_form *form);

int			ft_cptform(t_form *form);
int			ft_minsize(int nbform);
t_square	*ft_initsquare(int size);
int			ft_checking(t_form *form, t_square *square, t_point s_pt);
t_square	*ft_applyform(t_square *square, t_form *form, t_point s_pt);
t_square	*ft_compact(t_form *form, t_point s_pt, int size);

#endif
