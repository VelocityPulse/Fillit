/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 17:05:29 by aperraul          #+#    #+#             */
/*   Updated: 2015/12/08 09:33:36 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCS_H
# define STRUCS_H

# include <stdlib.h>
# include "libft.h"

# define YOLO ft_putstr("\nYOLO\n\n");

typedef	struct		s_str
{
	char			str[32];
	int				index;
	struct s_str	*next;
}					t_str;

typedef struct		s_form
{
	char			shape[4][5];
	int				index;
	struct s_form	*next;
}					t_form;

typedef struct		s_square
{
	char			shape[26][26];
	int				index;
	struct s_square	*next;
}					t_square;

t_str				*ft_addstr(t_str *begin, char *str);
t_str				*ft_addc(t_str *begin, char c);
t_str				*ft_newlstr(void);
int					ft_indexcpt(t_str *begin);
t_str				*ft_freelststr(t_str *begin);
char				*ft_exportstr(t_str *begin);

t_form				*ft_addform(t_form *begin);
t_form				*ft_newform(int index);
void				ft_displaylstform(t_form *begin);

#endif
