/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 00:59:14 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/12/17 13:01:11 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// これ、pscine CPC12とかlibftのボーナスでやったリストの話っすね
// argvをatoiしてint変数に格納
// まずargcから変数の数を把握して、格納するリストのサイズを確定してmalloc
int main (int argc, char *argv[])
{
	int			i;
	int			num;
	t_ps_list	stc_a;
	t_ps_list	stc_b;

	i = 0;
	// atoiでintに変換

	// スタックAを生成
	while(i < argc)
	{
		if(i == 0)
		{
			num = atoi(argv[i + 1]);			
			stc_a = ft_create_elem(num);
		}
		else
		{	
			ft_list_push_front();
		}
		i++;
	}
	// 同じサイズを持つストックBを作成
	//stc_b = ft_create_elem();
			
}
