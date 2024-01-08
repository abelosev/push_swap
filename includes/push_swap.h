/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelosev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:10:17 by abelosev          #+#    #+#             */
/*   Updated: 2023/01/30 12:09:10 by abelosev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}	t_node;

/* Stack */

t_node		*create_new_node(int new_value);
t_node		*find_max(t_node **node);
t_node		*find_min(t_node **node);
t_node		*find_next_min(t_node **node);
t_node		*find_last(t_node *node);
void		insert_end(t_node **node, t_node *to_insert);
void		indexation(t_node **node);
void		del_stack(t_node **node);
void		del_both_stacks(t_node **a, t_node **b);
void		check_vide(int ac, char **av);
void		fill_stack(t_node **node, int ac, char **av);
int			list_size(t_node *node);

/* Sorting */

int			is_sorted(t_node **node);
int			max_bits(t_node **node);
int			get_min(t_node **node, int value_index);
int			get_gap(t_node **node, int index);
void		mini_sort(t_node **a, t_node **b);
void		sort_3(t_node **a);
void		sort_4(t_node **a, t_node **b);
void		sort_5(t_node **a, t_node **b);
void		sort_radix(t_node **a, t_node **b);
void		radix_suppl(t_node **a, t_node **b, t_node *first_a, int i);

/* Input check */
int			is_doubled(t_node **node);
int			is_number(char *av);
int			is_zero(char *av);
void		input_check(int ac, char **av);
void		stack_check(t_node **node);
void		ft_split_free(char **strs);

/* Operations */

void		do_s(t_node *node);
void		do_sa(t_node **a);
void		do_sb(t_node **b);
void		do_ss(t_node **a, t_node **b);
void		do_p(t_node **p_from, t_node **p_to);
void		do_pa(t_node **b, t_node **a);
void		do_pb(t_node **a, t_node **b);
void		do_r(t_node **node);
void		do_ra(t_node **a);
void		do_rb(t_node **b);
void		do_rr(t_node **a, t_node **b);
void		do_rotrev(t_node **node);
void		do_rra(t_node **a);
void		do_rrb(t_node **b);
void		do_rrr(t_node **a, t_node **b);

/* Utils */
char		**ft_cpy_strs(char **strs, const char *s, char c);
char		**ft_malloc_strs(char **strs, const char *s, char c);
char		**ft_split(char const *s, char c);
char		**ft_merror(char **strs);
int			is_sign(char c);
int			is_digit(char c);
int			ft_strlen(char *s);
int			ft_count_words(char const *s, char c);
long int	ft_atoi(char *str);
void		ft_putstr(char *str);
void		ft_free(char **str);

/* Error */

void		error_exit(t_node **a, t_node **b);

#endif
