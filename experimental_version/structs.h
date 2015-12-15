/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 17:05:29 by aperraul          #+#    #+#             */
/*   Updated: 2015/12/11 16:12:44 by cchameyr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCS_H
# define STRUCS_H

# include <stdlib.h>
# include "libft.h"

# define YOLO ft_putstr("\nYOLO\n");
# define PAUSE while(1){sleep(1000);}

typedef	struct		s_str
{
	char			str[32];
	int				index;
	struct s_str	*next;
}					t_str;

typedef struct		s_form
{
	char			shape[4][4];
	int				index;
	struct s_form	*next;
}					t_form;

typedef struct		s_square
{
	char			array[26][26];
	int				fault;
	int				size;
	int				sizeout;
	int				error;
}					t_square;

typedef struct		s_point
{
	int				x;
	int				y;
}					t_point;

t_str				*ft_addstr(t_str *begin, char *str);
t_str				*ft_addc(t_str *begin, char c);
t_str				*ft_newlstr(void);
int					ft_indexcpt(t_str *begin);
t_str				*ft_freelststr(t_str *begin);
char				*ft_exportstr(t_str *begin);

t_form				*ft_newform(int index);
void				ft_displaylist(t_form *begin, int x, int y);
void				ft_displayform(t_form *form, int x, int y);

#endif
