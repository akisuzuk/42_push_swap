/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_make_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 15:22:02 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/12/17 15:42:29 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 全体的にpiscine CPC12のリストの問題を参照

#include "../includes/push_swap.h"

t_ps_list	*ft_create_elem(int num);

t_ps_list	*ft_create_elem(int num)
{
	t_ps_list	*ret;

	ret = (t_ps_list *)malloc(sizeof(t_ps_list));
	(*ret).prev = NULL;
	(*ret).next = NULL;
	(*ret).num = 0;
	return (ret);
	// もし最後の要素だったら、先頭のノードのprevに最後のノードを割り当てる
}

// スタック管理ということは、push_frontの処理でいい気がする。。。
void	ft_list_push_front(t_ps_list **begin_list, void *data)
{
	t_ps_list	*front_elem;

	front_elem = ft_create_elem(data);
	(*front_elem).next = *begin_list;
	*begin_list = front_elem;
}
