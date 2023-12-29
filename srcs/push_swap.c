/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 00:59:14 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/12/29 17:39:36 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// これ、pscine CPC12とかlibftのボーナスでやったリストの話っすね
// argvをatoiしてint変数に格納
// まずargcから変数の数を把握して、格納するリストのサイズを確定してmalloc

t_ps_list	*make_stc_a(int c, char *v)
{
	int			i;
	t_ps_list	*ret;

	i = 0;
	// 先頭は番兵ノード
	// 番兵ノードとわかるようにnull入れたけど、素直にprevとnextだけ持ってる構造体にした方がいいかも。。。
	ret = ft_create_elem(NULL);
	i++;
	while (i < c - 1)
	{
		ft_list_push_back(&ret, ft_atoi(v[i]));
		i++;
		if (i == c)
		{
			// 循環リストにする
			ft_make_circular(ret);	
		}
	}
	return (ret);
}

int	main(int argc, char **argv)
{
	int			i;
	int			j;
	int			num;
	t_ps_list	*stc_a;
	t_ps_list	*stc_b;

	// 引数が条件を満たしているかチェック
	i = 0;
	j = 0;
	while (i < argc - 1)
	{
		while (argv[i][j] != '\0')
		{
			if (ft_isdigit(argv[i][j++]) == 0)
			{
				write(2, "Error: Non-numeric values included.\n", 36);
				exit (1);
			}
		}
		i++;
	}	
	stc_a = make_stc_a (argc, argv);
	stc_b = ;
	free(stc_a);
	free(stc_b);
	return (0);
}
