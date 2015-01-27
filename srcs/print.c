/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 17:03:40 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/27 18:57:30 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			print_a(const char *prefix, t_env *env)
{
	int				i;

	ft_putstr(prefix);
	i = -1;
	while (++i < env->a.length)
	{
		if (i > 0)
			ft_putchar(' ');
		ft_putnbr(TG(int, &(env->a), i));
	}
	ft_putchar('\n');
}

void			print_ab(t_env *env)
{
	int				i;

	print_a("a: ", env);
	ft_putstr("b: ");
	i = -1;
	while (++i < env->b.length)
	{
		if (i > 0)
			ft_putchar(' ');
		ft_putnbr(TG(int, &(env->b), i));
	}
	ft_putchar('\n');
}

void			print_steps(t_env *env)
{
	int				i;

	i = -1;
	while (++i < env->steps.length)
	{
		if (i > 0)
			ft_putchar(' ');
		ft_putstr(env->steps.data[i]);
	}
	ft_putchar('\n');
}
