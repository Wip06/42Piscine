/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycandela <ycandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:11:21 by ycandela          #+#    #+#             */
/*   Updated: 2024/09/02 20:23:47 by ycandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb -1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i > 0)
	{
		nb *= i;
		i--;
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", ft_iterative_factorial(-12));
	return (0);
}*/
