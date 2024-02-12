/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_actions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:23:38 by akisuzuk          #+#    #+#             */
/*   Updated: 2024/02/12 18:30:01 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_ps_list **stc_a)
{
	int			temp;

	temp = (*((**stc_a).prev)).value;
	(*((**stc_a).prev)).value = (*(*((**stc_a).prev)).prev).value;
	(*(*((**stc_a).prev)).prev).value = temp;
	return ;
}

void	sb(t_ps_list **stc_b)
{
	int			temp;

	temp = (*((**stc_b).prev)).value;
	(*((**stc_b).prev)).value = (*(*((**stc_b).prev)).prev).value;
	(*(*((**stc_b).prev)).prev).value = temp;
	return ;
}

void	ss(t_ps_list **stc_a, t_ps_list **stc_b)
{
	int			temp;

	temp = (*((**stc_a).prev)).value;
	(*((**stc_a).prev)).value = (*(*((**stc_a).prev)).prev).value;
	(*(*((**stc_a).prev)).prev).value = temp;
	
	temp = (*((**stc_b).prev)).value;
	(*((**stc_b).prev)).value = (*(*((**stc_b).prev)).prev).value;
	(*(*((**stc_b).prev)).prev).value = temp;
	return ;

}

// push_backの後にうまいことmake+cirucularできるように実装
// あとリストの1ノードをクリアする関数も作った方がいいな
// とりあえず線形リストになったらpush_back使えないので、
// head_flag上手いこと使って追加するしかないか。。。
//void	pa()
//{

//}

//void	pb()
//{
//
//}
//
//void	ra()
//{
//
//}
//
//void	rb()
//{
//
//}
//
//void	rr()
//{
//
//}
//
//void	rra()
//{
//
//}
//
//void	rrb()
//{
//
//}
//
//void	rrr()
//{
//
//}