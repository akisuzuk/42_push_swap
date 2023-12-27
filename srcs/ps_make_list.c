/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_make_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 15:22:02 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/12/27 20:09:13 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 全体的にpiscine CPC12のリストの問題を参照

#include "../includes/push_swap.h"

t_ps_list	*ft_create_elem(int num)
{
	t_ps_list	*ret;

	ret = (t_ps_list *)malloc(sizeof(t_ps_list));
	(*ret).prev = NULL;
	(*ret).next = NULL;
	(*ret).value = num;
	return (ret);
	// もし最後の要素だったら、先頭のノードのprevに最後のノードを割り当てる
}

void	ft_list_push_front(t_ps_list **ex_list, void *data)
{
	t_ps_list	*front_elem;

	front_elem = ft_create_elem(data);
	(*front_elem).next = *ex_list;
	*ex_list = front_elem;
}

void	ft_list_push_back(t_ps_list **ex_list, void *data)
{
	t_ps_list	*back_elem;
	t_ps_list	*last;

	back_elem = ft_create_elem(data);
	last = ft_ps_list_last(*ex_list);
	(*last).next = back_elem;
}

int	ft_ps_list_size(t_ps_list *ex_list)
{
	int		cnt;

	cnt = 0;
	while (ex_list != NULL)
	{
		ex_list = (*ex_list).next;
		cnt++;
	}
	return (cnt);
}

t_ps_list	*ft_ps_list_last(t_ps_list *ex_list)
{
	t_ps_list	*prev_list;

	while (ex_list != NULL)
	{
		prev_list = ex_list;
		ex_list = (*ex_list).next;
	}
	return (prev_list);
}
