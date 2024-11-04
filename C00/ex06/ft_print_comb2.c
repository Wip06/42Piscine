/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycandela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 21:52:53 by ycandela          #+#    #+#             */
/*   Updated: 2024/08/26 23:33:17 by ycandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_write(int a, int b, int c, int d)
{
	a += '0';
	b += '0';
	c += '0';
	d += '0';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (! (a == '9' && b == '8' && c == '9' && d == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	a1;
	int	a2;
	int	a3;
	int	a4;

	a = 1;
	while (a < 9999)
	{
		a1 = (a / 1000) % 10;
		a2 = (a / 100) % 10;
		a3 = (a / 10) % 10;
		a4 = (a / 1) % 10;
		if ((a4 <= a2) || (a3 < a1))
		{
			a++;
			continue ;
		}
		ft_write(a1, a2, a3, a4);
		a++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
}*/
