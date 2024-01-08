/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelosev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:09:17 by abelosev          #+#    #+#             */
/*   Updated: 2023/01/28 15:03:23 by abelosev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_r(t_node **node)
{
	t_node	*last;
	t_node	*temp;
	t_node	*temp2;

	temp = *node;
	temp2 = (*node)->next;
	last = *node;
	while (last->next != NULL)
		last = last->next;
	last->next = temp;
	temp->next = NULL;
	*node = temp2;
}

void	do_ra(t_node **a)
{
	do_r(a);
	ft_putstr("ra\n");
}

void	do_rb(t_node **b)
{
	do_r(b);
	ft_putstr("rb\n");
}

void	do_rr(t_node **a, t_node **b)
{
	do_r(a);
	do_r(b);
	ft_putstr("rr\n");
}
