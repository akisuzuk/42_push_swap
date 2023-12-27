/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 01:00:58 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/12/27 19:59:59 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUAH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <math.h>
//# include <climits> // not for C but CPP 
# include <limits.h>
# include <stdbool.h>
# include <stdarg.h>
# include <fcntl.h>
# include <signal.h>

typedef struct s_ps_list
{
	struct t_ps_list	*prev;
	struct t_ps_list	*next;
	int					*value;
}	t_ps_list

int			ft_atoi(const char *str);
t_ps_list	*ft_create_elem(int num);
void		ft_list_push_front(t_ps_list **begin_list, void *data);
void		ft_list_push_back(t_ps_list **begin_list, void *data);
int			ft_ps_list_size(t_ps_list *begin_list);
t_ps_list	*ft_ps_list_last(t_ps_list *begin_list);

#endif
