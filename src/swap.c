/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelosev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:07:17 by abelosev          #+#    #+#             */
/*   Updated: 2023/01/28 15:02:02 by abelosev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_s(t_node *node)
{
	int	temp;

	if (node == NULL || node->next == NULL)
		return ;
	temp = node->value;
	node->value = node->next->value;
	node->next->value = temp;
	temp = node->index;
	node->index = node->next->index;
	node->next->index = temp;
}

void	do_sa(t_node **a)
{
	do_s(*a);
	ft_putstr("sa\n");
}

void	do_sb(t_node **b)
{
	do_s(*b);
	ft_putstr("sb\n");
}

void	do_ss(t_node **a, t_node **b)
{
	do_s(*a);
	do_s(*b);
	ft_putstr("ss\n");
}
