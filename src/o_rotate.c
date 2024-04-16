/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   o_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:29:43 by joelozan          #+#    #+#             */
/*   Updated: 2024/04/16 19:17:31 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*end;

	tmp = *stack;
	*stack = (*stack)->next;
	end = ft_lstlast(*stack);
	tmp->next = NULL;
	end->next = tmp;
}

void	ra(t_stack **stack)
{
	rotate(stack);
	ft_putendl_fd("ra", 1);
}

void	rb(t_stack **stack)
{
	rotate(stack);
	ft_putendl_fd("rb", 1);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_putendl_fd("rr", 1);
}
