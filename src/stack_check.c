/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelosev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:10:17 by abelosev          #+#    #+#             */
/*   Updated: 2023/01/30 00:50:05 by abelosev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_node **node)
{
	t_node	*current;

	current = *node;
	while (current && current->next)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}

int	is_doubled(t_node **node)
{
	t_node	*to_compare;
	t_node	*current;

	if (*node == NULL || !(*node))
		return (1);
	to_compare = *node;
	current = (*node)->next;
	while (to_compare->next && current)
	{
		while (current)
		{
			if (current->value == to_compare->value)
				return (1);
			current = current->next;
		}
		to_compare = to_compare->next;
		current = to_compare->next;
	}
	return (0);
}
