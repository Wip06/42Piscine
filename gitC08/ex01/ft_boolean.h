/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycandela <ycandela@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:03:52 by ycandela          #+#    #+#             */
/*   Updated: 2024/09/17 10:08:06 by ycandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

#include <unistd.h>

#define TRUE	1
#define FALSE	0
#define EVEN(x)	x % 2 == 0
#define EVEN_MSG	"I have an even number of arguments.\n"
#define ODD_MSG	"I have an odd number of arguments.\n"
#define SUCCESS	0

typedef int t_bool;

#endif
