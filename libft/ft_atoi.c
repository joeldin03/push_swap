/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 09:26:50 by joelozan          #+#    #+#             */
/*   Updated: 2024/04/16 19:22:01 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/push_swap.h"

int	ft_atoi(const char *str)
{
	int		nb;
	size_t	i;
	int		sign;

	nb = 0;
	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] <= 13 && str[i] >= 9))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main()
{
	const char	*notn = "hola";
	const char	*kindan = "hol84a";
	const char	*n = "42";
	const char	*int_max = "2147483648";
	const char	*int_min = "-2147483648";
	const char	*casi_int_max = "2147483647";
	const char	*casi_int_min = "-2147483647";
	const char	*past_int_max = "2147483649";
	const char	*past_int_min = "-2147483649";
	const char	*over = "3333333333333333";
	const char	*nover = "-3333333333333333";
	const char	*signs = "-++--+-42";

	printf("%d\n", ft_atoi(notn));
	printf("%d\n", atoi(notn));
	printf("\n");
	printf("%d\n", ft_atoi(kindan));
	printf("%d\n", atoi(kindan));
	printf("\n");
	printf("%d\n", ft_atoi(n));
	printf("%d\n", atoi(n));
	printf("\n");
	printf("%d\n", ft_atoi(int_max));
	printf("%d\n", atoi(int_max));
	printf("\n");
	printf("%d\n", ft_atoi(int_min));
	printf("%d\n", atoi(int_min));
	printf("\n");
	printf("%d\n", ft_atoi(casi_int_max));
	printf("%d\n", atoi(casi_int_max));
	printf("\n");
	printf("%d\n", ft_atoi(casi_int_min));
	printf("%d\n", atoi(casi_int_min));
	printf("\n");
	printf("%d\n", ft_atoi(past_int_max));
	printf("%d\n", atoi(past_int_max));
	printf("\n");
	printf("%d\n", ft_atoi(past_int_min));
	printf("%d\n", atoi(past_int_min));
	printf("\n");
	printf("%d\n", ft_atoi(over));
	printf("%d\n", atoi(over));
	printf("\n");
	printf("%d\n", ft_atoi(nover));
	printf("%d\n", atoi(nover));
	printf("\n");
	printf("%d\n", ft_atoi(signs));
	printf("%d\n", atoi(signs));
	return (0);
}
*/
