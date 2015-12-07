/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperraul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 17:05:29 by aperraul          #+#    #+#             */
/*   Updated: 2015/12/08 00:13:49 by aperraul         ###   ########.fr       */
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

l_str	*ft_addstr(l_str *begin, char *str);
l_str	*ft_addc(l_str *begin, char c);
l_str	*ft_newlstr(l_str *begin);
int		ft_indexcpt(l_str *begin);

#endif
