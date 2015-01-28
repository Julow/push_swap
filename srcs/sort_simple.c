/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 19:03:11 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/28 00:27:03 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_bool	is_sort(t_tab *tab)
{
	int				i;

	i = 0;
	while (++i < tab->length)
	{
		if (TG(int, tab, i)
			< TG(int, tab, i - 1))
			return (false);
	}
	return (true);
}

t_env			*sort_simple(t_env *env)
{
	while (!is_sort(&(env->a)))
	{
		if (TG(int, &(env->a), env->a.length - 1)
			< TG(int, &(env->a), env->a.length - 2))
		{
			call_op(env, "sa");
			call_op(env, "rra");
		}
			call_op(env, "sa");
		call_op(env, "ra");
	}
	return (env);
}
