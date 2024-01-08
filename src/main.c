/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelosev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:10:17 by abelosev          #+#    #+#             */
/*   Updated: 2023/01/30 08:54:12 by abelosev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;

	if (ac < 2)
		return (0);
	input_check(ac, av);
	b = NULL;
	a = NULL;
	fill_stack(&a, ac, av);
	if (is_doubled(&a) == 1)
		error_exit(NULL, NULL);
	indexation(&a);
	if (list_size(a) <= 5)
		mini_sort(&a, &b);
	else
		sort_radix(&a, &b);
	del_both_stacks(&a, &b);
	return (0);
}
