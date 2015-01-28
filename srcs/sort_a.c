/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 17:55:21 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/28 17:55:31 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_env			*sort_a(t_env *env)
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
