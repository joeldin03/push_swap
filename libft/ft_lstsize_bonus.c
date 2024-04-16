/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:49:25 by joelozan          #+#    #+#             */
/*   Updated: 2024/04/16 19:21:00 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/push_swap.h"

int	ft_lstsize(t_stack *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/*
#include <stdio.h>
int main()
{
	t_list *lst = malloc(sizeof(t_list));
	
	printf("%d\n", ft_lstsize(lst));
}
*/