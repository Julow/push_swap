/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 19:03:11 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/28 17:35:11 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_env			*sort_simple(t_env *env)
{
	int				i;

	if (env->a.length <= 2)
		return (NULL);
	i = env->a.length - 1;
	while (i > 0)
	{
		if (TG(int, &(env->a), env->a.length - 1)
			> TG(int, &(env->a), env->a.length - 2))
		{
			call_op(env, "sa");
			while (TG(int, &(env->a), env->a.length - 1)
				< TG(int, &(env->a), 0) && i < env->a.length - 1)
			{
				call_op(env, "rra");
				call_op(env, "sa");
				i++;
			}
		}
		call_op(env, "ra");
		i--;
	}
	call_op(env, "ra");
	return (env);
}

t_env			*sort_simpler(t_env *env)
{
	int				i;

	if (env->a.length <= 2)
		return (NULL);
	i = env->a.length - 1;
	while (i > 0)
	{
		if (TG(int, &(env->a), env->a.length - 1)
			> TG(int, &(env->a), env->a.length - 2))
		{
			call_op(env, "sa");
			while (TG(int, &(env->a), env->a.length - 1)
				< TG(int, &(env->a), 0) && i < env->a.length - 1)
			{
				call_op(env, "ra");
				call_op(env, "sa");
				i++;
			}
		}
		call_op(env, "rra");
		i--;
	}
	call_op(env, "rra");
	return (env);
}
