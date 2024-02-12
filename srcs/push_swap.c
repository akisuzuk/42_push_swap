/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 00:59:14 by akisuzuk          #+#    #+#             */
/*   Updated: 2024/02/12 18:21:48 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// これ、pscine CPC12とかlibftのボーナスでやったリストの話っすね
// argvをatoiしてint変数に格納
// まずargcから変数の数を把握して、格納するリストのサイズを確定してmalloc

t_ps_list	*make_stc_a(int c, char **v)
{
	int			i;
	t_ps_list	*ret;

	i = 1;
	// 先頭は番兵ノード
	// 番兵ノードとわかるようにnull入れたけど、素直にprevとnextだけ持ってる構造体にした方がいいかも。。。
	ret = ft_create_elem(0, 1);
	while (i < c)
	{
		ft_list_push_back(&ret, ft_atoi(v[i]));
		if (i + 1 == c)
		{
			// 循環リストにする
			// と思ったけど、複雑化しそうならナシでいいかも。このif文まるっとCOでOK
			ft_make_circular(ret);
		}
		i++;
	}
	return (ret);
}

t_ps_list	*make_stc_b(void)
{
	int			i;
	t_ps_list	*ret;

	i = 1;
	// 先頭は番兵ノード
	// 番兵ノードとわかるようにnull入れたけど、素直にprevとnextだけ持ってる構造体にした方がいいかも。。。
	ret = ft_create_elem(0, 1);
	ft_make_circular(ret);
	return (ret);
}


int	main(int argc, char **argv)
{
	int			i;
	int			j;
	//int			num;
	t_ps_list	*stc_a;
	t_ps_list	*stc_b;
	t_ps_list	*temp;

	// 引数が条件を満たしているかチェック
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (ft_isdigit(argv[i][j]) == 0)
			{
				write(2, "Error: Non-numeric values included.\n", 36);
				exit (1);
			}
			j++;
		}
		i++;
	}
	stc_a = make_stc_a (argc, argv);
	// スタックb
	stc_b = make_stc_b ();

	// リストの中身確認用
	temp = stc_a;
	printf("---before actios---\n");
	i = 0;
	while (temp != NULL && i < 20)
	{
		printf("list A value = %d, prev value = %d, next value = %d, head_flag = %d\n", (*temp).value, (*((*temp).prev)).value, (*((*temp).next)).value, (*temp).headflag);
		temp = (*temp).next;
		i++;
	}
	printf("-------------------\n");
	temp = stc_b;
	i = 0;
	while (temp != NULL && i < 20)
	{
		printf("list B value = %d, prev value = %d, next value = %d, head_flag = %d\n", (*temp).value, (*((*temp).prev)).value, (*((*temp).next)).value, (*temp).headflag);
		temp = (*temp).next;
		i++;
	}

	printf("---apply actios---\n");
	printf(".\n");
	printf(".\n");
	printf(".\n");

	sa(&stc_a);
	sb(&stc_b);
	//ss(stc_a, stc_b);
	//pa(stc_a, stc_b);
	//pb(stc_a, stc_b);
	//ra(stc_a, stc_b);
	//rb(stc_a, stc_b);
	//rr(stc_a, stc_b);
	//rra(stc_a, stc_b);
	//rrb(stc_a, stc_b);
	//rrr(stc_a, stc_b);

	printf("---after actios---\n");
	temp = stc_a;
	i = 0;
	while (temp != NULL && i < 20)
	{
		printf("list A value = %d, prev value = %d, next value = %d, head_flag = %d\n", (*temp).value, (*((*temp).prev)).value, (*((*temp).next)).value, (*temp).headflag);
		temp = (*temp).next;
		i++;
	}
	printf("-------------------\n");
	temp = stc_b;
	i = 0;
	while (temp != NULL && i < 20)
	{
		printf("list B value = %d, head_flag = %d\n", (*temp).value, (*temp).headflag);
		temp = (*temp).next;
		i++;
	}



	free(stc_a);
	//free(stc_b);
	return (0);
}
