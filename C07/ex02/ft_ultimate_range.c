/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycandela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 12:57:01 by ycandela          #+#    #+#             */
/*   Updated: 2024/09/04 14:29:02 by ycandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*result;

	i = max - min;
	result = malloc(sizeof(int) * (i));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (result == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = result;
	i = 0;
	while (max > min)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
int	main()
{
	int	i;
	int	min;
	int	max;
	int	*tab;
	int	size;

	i = 0;
	min = 5;
	max = 100;
	size = ft_ultimate_range(&tab, min, max);
	printf("%d", size);
}*/
