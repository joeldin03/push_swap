/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   o_rrotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:36:29 by joelozan          #+#    #+#             */
/*   Updated: 2024/04/16 19:18:29 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/push_swap.h"

static t_stack	*before_last(t_stack *stack)
{
	while (stack && stack->next->next != NULL)
		stack = stack->next;
	return (stack);
}

static void	rrotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*end;
	t_stack	*new_end;

	end = ft_lstlast(*stack);
	new_end = before_last(*stack);
	tmp = *stack;
	*stack = end;
	(*stack)->next = tmp;
	new_end->next = NULL;
}

void	rra(t_stack **stack)
{
	rrotate(stack);
	ft_putendl_fd("rra", 1);
}

void	rrb(t_stack **stack)
{
	rrotate(stack);
	ft_putendl_fd("rrb", 1);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rrotate(stack_a);
	rrotate(stack_b);
	ft_putendl_fd("rrr", 1);
}
