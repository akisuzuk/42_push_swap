/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 01:00:58 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/12/16 16:48:40 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUAH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <math.h>
//# include <climits> // ubuntuではいけたけどmacだと弾かれるな
# include <limits.h>
# include <stdbool.h>
# include <stdarg.h>
# include <fcntl.h>
# include <signal.h>

int		ft_atoi(const char *str);

typedef struct s_ps_list
{
	struct t_ps_list	*prev;
	struct t_ps_list	*next;
	int					*num;
}	t_ps_list

#endif
