/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:26:31 by joelozan          #+#    #+#             */
/*   Updated: 2024/04/16 19:35:31 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/push_swap.h"

t_stack	*ft_lstnew(int content)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (0);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*
#include <stdio.h>
int main()
{
	t_stack *new_list = ft_lstnew("hola");
	printf("%s\n", new_list->content);
}
*/