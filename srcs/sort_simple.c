/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 19:07:19 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/18 18:30:25 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		rot_to(t_env *env, int to)
{
	t_op			op;

	if (to >= (env->a.length / 2))
	{
		to = env->a.length - to - 1;
		op = ra;
	}
	else
	{
		to++;
		op = rra;
	}
	while (to--)
		call_op(env, op);
}

t_bool			sort_simple(t_env *env)
{
	while (env->a.length > 1)
	{
		rot_to(env, ft_dstackmin(&(env->a)));
		call_op(env, pb);
	}
	while (env->b.length > 0)
		call_op(env, pa);
	if (FLAG(env->flags, FLAG_PRTED))
		PC('\n');
	return (true);
}
