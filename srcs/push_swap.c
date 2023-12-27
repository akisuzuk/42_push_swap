/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 00:59:14 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/12/27 19:45:41 by akisuzuk         ###   ########.fr       */
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
	ret = ft_create_elem(ft_atoi(v[i]));
	i++;
	while (i < c)
	{
		{	
			ft_list_push_front(&ret, ft_atoi(v[i]));
			i++;
		}
		i++;
	}
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
	return (0);
}
