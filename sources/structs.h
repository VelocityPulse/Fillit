/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 17:05:29 by aperraul          #+#    #+#             */
/*   Updated: 2015/12/08 01:50:53 by aperraul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCS_H
# define STRUCS_H

# include "libft.h"

typedef	struct		t_str
{
	char			str[32];
	int				index;
	struct t_str	*next;
}					l_str;

typedef struct		t_form
{
	char			*str;
	int				index;
	struct t_form	*next;
}					l_form;

l_str	*ft_addstr(l_str *begin, char *str);
l_str	*ft_addc(l_str *begin, char c);
l_str	*ft_newlstr(l_str *begin);
int		ft_indexcpt(l_str *begin);
l_str	*ft_freelststr(l_str *begin);
char	*ft_exportstr(l_str *begin);

l_form	*ft_addform(l_form *begin, char *str);
l_form	*ft_newform(void);
void	ft_displaylstform(l_form *begin);
int		ft_formcmp(l_form *begin);

#endif
