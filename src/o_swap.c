/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   o_swap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:10:37 by joelozan          #+#    #+#             */
/*   Updated: 2024/04/16 19:19:04 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/push_swap.h"

static void	swap(t_stack **stack)
{
	t_stack	*tmp;

	if (!*stack || (*stack)->next == NULL)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
}

void	sa(t_stack **stack)
{
	swap(stack);
	ft_putendl_fd("sa", 1);
}

void	sb(t_stack **stack)
{
	swap(stack);
	ft_putendl_fd("sb", 1);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_putendl_fd("ss", 1);
}
