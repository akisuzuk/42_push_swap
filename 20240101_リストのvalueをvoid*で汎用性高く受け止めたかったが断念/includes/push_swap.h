/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 01:00:58 by akisuzuk          #+#    #+#             */
/*   Updated: 2024/01/01 21:45:38 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

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
# include "libft.h"

typedef struct s_ps_list
{
	struct s_ps_list	*prev;
	struct s_ps_list	*next;
	int					*value;
}	t_ps_list;

int			ft_atoi(const char *str);
t_ps_list	*ft_create_elem(int num);
void		ft_list_push_front(t_ps_list **ex_list, void *data);
void		ft_list_push_back(t_ps_list **ex_list, void *data);
int			ft_ps_list_size(t_ps_list *ex_list);
t_ps_list	*ft_ps_last_list(t_ps_list *ex_list);
void		ft_make_circular(t_ps_list *ex_list);
void		ft_clear_circular_list(t_ps_list *ex_list);

#endif
