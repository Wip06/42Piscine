/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycandela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:32:29 by ycandela          #+#    #+#             */
/*   Updated: 2024/09/05 11:05:50 by ycandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	s_and_r(char *str, char s, char r)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == s)
			ft_putchar(r);
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (argc == 4)
	{
		if (!(argv[2][1] != '\0' || argv[3][1] != '\0'))
		{
			s_and_r(&argv[1][i], argv[2][i], argv[3][i]);
		}
	}
	write(1, "\n", 1);
	return (0);
}
