/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:23:00 by joelozan          #+#    #+#             */
/*   Updated: 2024/04/16 19:37:22 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/push_swap.h"

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	if (!new || !lst)
		return ;
	else if (!*lst)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}
