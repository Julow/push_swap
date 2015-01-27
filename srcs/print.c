/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 17:03:40 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/27 17:30:48 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			print_stacks(t_env *env)
{
	int				i;

	ft_putstr("a: ");
	i = -1;
	while (++i < env->a.length)
	{
		ft_putnbr(TG(int, &(env->a), i));
		ft_putchar(' ');
	}
	ft_putstr("\nb: ");
	i = -1;
	while (++i < env->b.length)
	{
		ft_putnbr(TG(int, &(env->b), i));
		ft_putchar(' ');
	}
	ft_putchar('\n');
}
