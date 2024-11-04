/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycandela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:51:20 by ycandela          #+#    #+#             */
/*   Updated: 2024/09/04 14:42:24 by ycandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	tab = malloc(sizeof(*tab) * (max - min));
	i = 0;
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*
int	main(void)
{
	int	*tab;
	int	i;
	int	min;
	int	max;

	i = 0;
	min = 5;
	max = 15;
	tab = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d\n", tab[i]);
		i++;
	}
}*/
