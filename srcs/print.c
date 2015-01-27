/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 17:03:40 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/27 19:12:41 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		print_ab(t_env *env)
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

static void		print_vsteps(t_env *env)
{
	// TODO
}

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

void			print_steps(t_env *env)
{
	int				i;

	if (FLAG(FLAG_V))
	{
		print_vsteps(env);
		print_a("Final a: ", env);
		ft_putstr("Final steps: ");
	}
	i = -1;
	while (++i < env->steps.length)
	{
		if (i > 0)
			ft_putchar(' ');
		ft_putstr(env->steps.data[i]);
	}
	ft_putchar('\n');
}
