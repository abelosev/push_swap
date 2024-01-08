/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelosev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:10:17 by abelosev          #+#    #+#             */
/*   Updated: 2023/01/30 00:59:04 by abelosev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number(char *av)
{
	int	i;

	i = 0;
	if (is_sign(av[i]) && av[i + 1] != '\0')
		i++;
	while (av[i] && is_digit(av[i]))
		i++;
	if (av[i] != '\0' && !is_digit(av[i]))
		return (0);
	return (1);
}

void	ft_split_free(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

void	input_check(int ac, char **av)
{
	int		i;
	long	tmp;
	char	**args;	

	i = 0;
	if (ac == 2)
		args = ft_split(av[1], ' ');
	else
	{
		i = 1;
		args = av;
	}
	while (args[i])
	{
		tmp = ft_atoi(args[i]);
		if (!is_number(args[i]))
			error_exit(NULL, NULL);
		if (tmp < -2147483648 || tmp > 2147483647)
			error_exit(NULL, NULL);
		i++;
	}
	if (ac == 2)
		ft_split_free(args);
}

void	error_exit(t_node **a, t_node **b)
{
	if (a == NULL || *a != NULL)
		del_stack(a);
	if (b == NULL || *b != NULL)
		del_stack(b);
	ft_putstr("Error\n");
	exit(1);
}
