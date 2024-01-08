/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_create.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelosev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:10:17 by abelosev          #+#    #+#             */
/*   Updated: 2023/01/30 08:48:46 by abelosev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_new_node(int new_value)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node || new_node == NULL)
		return (NULL);
	new_node->value = new_value;
	new_node->index = -1;
	new_node->next = NULL;
	return (new_node);
}

void	insert_end(t_node **node, t_node *to_insert)
{
	t_node	*last;

	if (!to_insert)
		return ;
	if (!(*node))
	{
		*node = to_insert;
		return ;
	}
	last = find_last(*node);
	last->next = to_insert;
}

void	indexation(t_node **node)
{
	t_node	*current;
	int		index;

	index = 0;
	current = find_next_min(node);
	while (current)
	{
		current->index = index++;
		current = find_next_min(node);
	}
}

void	check_vide(int ac, char **av)
{
	int	i;

	i = 1;
	while (av[i] && i < ac)
	{
		if (ft_strlen(av[i]) == 0)
			error_exit(NULL, NULL);
		i++;
	}
}

void	fill_stack(t_node **node, int ac, char **av)
{
	t_node	*new_node;
	char	**args;
	int		i;

	i = 0;
	if (ac == 2)
		args = ft_split(av[1], ' ');
	else
	{
		check_vide(ac, av);
		i = 1;
		args = av;
	}
	while (args[i])
	{
		new_node = create_new_node(ft_atoi(args[i]));
		insert_end(node, new_node);
		i++;
	}
	if (ac == 2)
		ft_split_free(args);
}
