/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelosev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:08:17 by abelosev          #+#    #+#             */
/*   Updated: 2023/01/28 15:02:46 by abelosev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_p(t_node **p_from, t_node **p_to)
{
	t_node	*temp;

	if (*p_from == NULL)
		return ;
	temp = (*p_from)->next;
	(*p_from)->next = *p_to;
	*p_to = *p_from;
	*p_from = temp;
}

void	do_pa(t_node **b, t_node **a)
{
	do_p(b, a);
	ft_putstr("pa\n");
}

void	do_pb(t_node **a, t_node **b)
{
	do_p(a, b);
	ft_putstr("pb\n");
}
