/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 00:59:14 by akisuzuk          #+#    #+#             */
/*   Updated: 2024/02/10 18:07:44 by akisuzuk         ###   ########.fr       */
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
	ret = ft_create_elem(0);
	while (i < c)
	{
		printf("LOOP make_stc_a\n");
		printf("i=%d, c=%d\n", i, c);
		ft_list_push_back(&ret, ft_atoi(v[i]));
		if (i + 1 == c)
		{
			printf("make circular!\n");
			// 循環リストにする
			// と思ったけど、複雑化しそうならナシでいいかも
			ft_make_circular(ret);
		}
		i++;
	}
	return (ret);
}

int	main(int argc, char **argv)
{
	int			i;
	int			j;
	//int			num;
	t_ps_list	*stc_a;
	//t_ps_list	*stc_b;
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
	printf("argc = %d\n", argc);
	stc_a = make_stc_a (argc, argv);
	// スタックb
	//stc_b = make_stc_b (argc);

	// リストの中身確認用
	//temp = (*stc_a).next;
	temp = stc_a;
	printf("--------------------------------\n");
	i = 0;
	while (temp != NULL && i < 20)
	{
		printf("stc_a list value = :%d\n", (*temp).value);
		temp = (*temp).next;
		i++;
	}

	free(stc_a);
	//free(stc_b);
	return (0);
}
