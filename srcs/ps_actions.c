/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_actions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:23:38 by akisuzuk          #+#    #+#             */
/*   Updated: 2024/02/13 00:54:56 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// 今更だが値を入れ替えるのでなく、
// prev/nextを入れ替えるようにした方がよかったってか
// そうしないと課題の意味ねえわ
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


// 番兵ノードが固定なのをうまく使って入れ替える
void	ra(t_ps_list **stc_a)
{
	// スタックの上から2番目のノードのnext
	(*((*((**stc_a).prev)).prev)).next = stc_a;
	// 番兵ノードのprev
	(**stc_a).prev =

	// スタックの一番のノード
	(*((**stc_a).prev)).prev = stc_a;
	(*((**stc_a).prev)).next = (**stc_a).next;


	// あ、だめだ
	// new_head, new_tail, とかで管理した方がいいかも
	// 方針参考
	//　https://github.com/Thuggonaut/42IC_Ring02_Push_swap/blob/main/push_swap/srcs/commands/rotate.c
}

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
