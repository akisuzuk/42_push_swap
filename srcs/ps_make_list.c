/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_make_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 15:22:02 by akisuzuk          #+#    #+#             */
/*   Updated: 2024/02/12 17:29:45 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_ps_list	*ft_create_elem(int num, int headflag)
{
	t_ps_list	*ret;

	ret = (t_ps_list *)malloc(sizeof(t_ps_list));
	if (ret == NULL)
		exit(1);
	// 結局prev使ってないからカットでもいいかも
	(*ret).prev = NULL;
	(*ret).next = NULL;
	(*ret).headflag = headflag;
	(*ret).value = num;
	return (ret);
}

void	ft_list_push_front(t_ps_list **ex_list, int data)
{
	t_ps_list	*front_elem;
	t_ps_list	*head;

	front_elem = ft_create_elem(data, 0);
	head = *ex_list;
	(*front_elem).next = *ex_list;
	(*head).prev = front_elem;
}

void	ft_list_push_back(t_ps_list **ex_list, int data)
{
	t_ps_list	*back_elem;
	t_ps_list	*last;

	back_elem = ft_create_elem(data, 0);
	last = ft_last_list(*ex_list);
	(*last).next = back_elem;
	(*back_elem).prev = last;
}

t_ps_list	*ft_last_list(t_ps_list *ex_list)
{
	t_ps_list	*prev_list;

	if (ex_list == NULL)
	{
		return (NULL);
	}
	while (ex_list != NULL)
	{
		prev_list = ex_list;
		ex_list = (*ex_list).next;
	}
	return (prev_list);
}

int	ft_list_size(t_ps_list *ex_list)
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

// 上のft_list_last使えば循環リスト行けそう、最初のノードをtempに入れといて
// ループの最後のノードのnextにtempをブチ込む
void	ft_make_circular(t_ps_list *ex_list)
{
	t_ps_list	*head;
	t_ps_list	*tail;

	if (ex_list == NULL)
		return ;
	head = ex_list;
	tail = ft_last_list(ex_list);
	(*tail).next = head;
	(*head).prev = tail;
}

// 循環リストをクリア
void	ft_clear_circular_list(t_ps_list *ex_list)
{
	t_ps_list	*p;
	t_ps_list	*prev;

	p = (*ex_list).next;
	prev = ex_list;
	while (p != ex_list)
	{
		(*prev).next = (*p).next;
		free (p);
		p = (*prev).next;
	}
}

// 線形リストをクリア
// 下記↓参考に、編集中
// https://programming-place.net/ppp/contents/algorithm/data_struct/003.html#library
//void	*ft_clear_linear_list(t_ps_list *ex_list)
//{
//	t_ps_list	*p;
//	t_ps_list	*prev;
//
//	p = (*ex_list).next;
//	prev = ex_list;
//	while (p != ex_list)
//	{
//		(*prev).next = (*p).next;
//		free (p);
//		p = (*prev).next;
//	}
//}

