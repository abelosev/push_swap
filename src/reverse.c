/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelosev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:10:17 by abelosev          #+#    #+#             */
/*   Updated: 2023/01/28 15:04:09 by abelosev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_rotrev(t_node **node)
{
	t_node	*temp;
	t_node	*prev_last;
	t_node	*last;

	temp = *node;
	prev_last = *node;
	while (prev_last && prev_last->next && prev_last->next->next)
		prev_last = prev_last->next;
	last = prev_last->next;
	*node = last;
	(*node)->next = temp;
	prev_last->next = NULL;
}

void	do_rra(t_node **a)
{
	do_rotrev(a);
	ft_putstr("rra\n");
}

void	do_rrb(t_node **b)
{
	do_rotrev(b);
	ft_putstr("rrb\n");
}

void	do_rrr(t_node **a, t_node **b)
{
	do_rotrev(a);
	do_rotrev(b);
	ft_putstr("rrr\n");
}
