/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_manip.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelosev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:10:17 by abelosev          #+#    #+#             */
/*   Updated: 2023/01/30 08:31:15 by abelosev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	list_size(t_node *node)
{
	int		size;
	t_node	*temp;

	size = 0;
	temp = node;
	while (temp != NULL)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}

void	del_stack(t_node **node)
{
	t_node	*current;
	t_node	*temp;

	current = NULL;
	temp = NULL;
	if (node == NULL)
		return ;
	else
	{
		current = *node;
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp);
		}
		*node = NULL;
	}
}

void	del_both_stacks(t_node **a, t_node **b)
{
	del_stack(a);
	del_stack(b);
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
		free(str[i--]);
}
