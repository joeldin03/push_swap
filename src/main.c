/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:45:15 by joelozan          #+#    #+#             */
/*   Updated: 2024/04/18 19:22:04 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/push_swap.h"

static t_stack	*get_next_min(t_stack **stack)
{
	t_stack	*head;
	t_stack	*min;
	int		has_min;

	min = NULL;
	has_min = 0;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1)
				&& (!has_min || head->content < min->content))
			{
				min = head;
				has_min = 1;
			}
			head = head->next;
		}
	}
	return (min);
}

static void	index_stack(t_stack **stack)
{
	t_stack	*head;
	int		index;

	index = 0;
	head = get_next_min(stack);
	while (head)
	{
		head->index = index++;
		head = get_next_min(stack);
	}
}

static void	set_stack(t_stack **stack, int argc, char **argv)
{
	t_stack	*new;
	char	**args;
	int		i;

	i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		new = ft_lstnew(ft_atoi(args[i]));
		ft_lstadd_back(stack, new);
		i++;
	}
	index_stack(stack);
	if (argc == 2)
		ft_free(args);
}

int	main(int ac, char **av)
{
	t_stack	**stack_a;
	t_stack	**stack_b;

	if (ac < 2)
		return (-1);
	check_args(ac, av);
	stack_a = malloc(sizeof(t_stack));
	stack_b = malloc(sizeof(t_stack));
	*stack_a = NULL;
	*stack_b = NULL;
	set_stack(stack_a, ac, av);
	if (is_sorted(stack_a))
	{
		free(stack_a);
		free(stack_b);
		return (0);
	}
	sort_stack(stack_a, stack_b);
	free(stack_a);
	free(stack_b);
	return (0);
}
