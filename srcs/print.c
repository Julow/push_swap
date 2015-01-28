/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 17:03:40 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/28 10:55:55 by jaguillo         ###   ########.fr       */
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

	if (env->a.length > 0)
		print_a("a: ", env);
	if (env->b.length <= 0)
		return ;
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

	if (FLAG(FLAG_A))
	{
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
	if (FLAG(FLAG_A))
		ft_printf(" (%d)", env->steps.length);
	ft_putchar('\n');
}

void			print_verbose(t_env *env, t_env *sorted)
{
	int				i;

	i = -1;
	while (++i < sorted->steps.length)
	{
		ft_printf("%d - %s:\n", i, sorted->steps.data[i]);
		call_op(env, sorted->steps.data[i]);
		print_ab(env);
	}
	env_kill(env);
}
