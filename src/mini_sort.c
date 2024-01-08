/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelosev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:10:17 by abelosev          #+#    #+#             */
/*   Updated: 2023/01/30 05:57:42 by abelosev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_node **a)
{
	t_node	*max;

	max = find_max(a);
	if (*a == max)
		do_ra(a);
	else if ((*a)->next == max)
		do_rra(a);
	else if ((*a)->next->next == max)
		do_sa(a);
	if (is_sorted(a) == 0)
		do_sa(a);
}

void	sort_4(t_node **a, t_node **b)
{
	t_node	*min;

	min = find_min(a);
	if ((*a)->next == min)
		do_sa(a);
	else if ((*a)->next->next == min)
	{
		do_rra(a);
		do_rra(a);
	}
	else if ((*a)->next->next->next == min)
		do_rra(a);
	do_pb(a, b);
	sort_3(a);
	do_pa(b, a);
}

void	sort_5(t_node **a, t_node **b)
{
	int	gap;

	gap = get_gap(a, get_min(a, -1));
	if (gap == 1)
		do_ra(a);
	else if (gap == 2)
	{
		do_ra(a);
		do_ra(a);
	}
	else if (gap == 3)
	{
		do_rra(a);
		do_rra(a);
	}
	else if (gap == 4)
		do_rra(a);
	if (is_sorted(a))
		return ;
	do_pb(a, b);
	sort_4(a, b);
	do_pa(b, a);
}

void	mini_sort(t_node **a, t_node **b)
{
	int	size;

	if (is_sorted(a) == 1 || list_size(*a) == 0
		|| list_size(*a) == 1)
		return ;
	size = list_size(*a);
	if (size == 2)
		do_sa(a);
	else if (size == 3)
		sort_3(a);
	else if (size == 4)
		sort_4(a, b);
	else if (size == 5)
		sort_5(a, b);
}
