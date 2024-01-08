/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelosev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:10:17 by abelosev          #+#    #+#             */
/*   Updated: 2023/01/30 05:58:00 by abelosev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*find_max(t_node **node)
{
	t_node	*max;
	t_node	*current;

	max = *node;
	current = *node;
	while (current != NULL)
	{
		if (current->value > max->value)
			max = current;
		current = current->next;
	}
	return (max);
}

t_node	*find_min(t_node **node)
{
	t_node	*min;
	t_node	*current;

	min = *node;
	current = *node;
	while (current != NULL)
	{
		if (current->value < min->value)
			min = current;
		current = current->next;
	}
	return (min);
}

t_node	*find_next_min(t_node **node)
{
	t_node	*head;
	t_node	*min;
	int		has_min;

	min = NULL;
	has_min = 0;
	head = *node;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (!has_min || head->value < min->value))
			{
				min = head;
				has_min = 1;
			}
			head = head->next;
		}
	}
	return (min);
}

t_node	*find_last(t_node *node)
{
	while (node && node->next != NULL)
		node = node->next;
	return (node);
}
