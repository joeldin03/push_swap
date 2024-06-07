/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:54:15 by joelozan          #+#    #+#             */
/*   Updated: 2024/05/07 21:32:27 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack
{
	int				content;
	int				index;
	struct s_stack	*next;
}	t_stack;

void	sa(t_stack **stack);
void	sb(t_stack **stack);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack);
void	rb(t_stack **stack);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack);
void	rrb(t_stack **stack);
void	rrr(t_stack **stack_a, t_stack **stack_b);
void	radix_sort(t_stack **stack_a, t_stack **stack_b);
void	sort_stack(t_stack **stack_a, t_stack **stack_b);

void	check_args(int ac, char **av);
void	ft_free(char **str);
int		is_sorted(t_stack **stack);
void	sa_rra(t_stack **stack);
void	ra_sa_rra(t_stack **stack);
int		get_distance(t_stack **stack, int index);

int		ft_isdigit(int n);
char	**ft_split(const char *s, char c);
void	ft_putendl_fd(char *s, int fd);
int		ft_lstsize(t_stack *lst);
long	ft_atoi(const char *str);
t_stack	*ft_lstnew(int content);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack	*ft_lstlast(t_stack *lst);

#endif