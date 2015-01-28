/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_rot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 13:32:58 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/28 13:35:04 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_env			*sort_rot(t_env *env)
{
	int				i;

	i = env->a.length;
	while (--i >= 0)
	{
		if (is_sort(&(env->a)))
			return (env);
		call_op(env, "ra");
	}
	return (NULL);
}

t_env			*sort_rrot(t_env *env)
{
	int				i;

	i = env->a.length;
	while (--i >= 0)
	{
		if (is_sort(&(env->a)))
			return (env);
		call_op(env, "rra");
	}
	return (NULL);
}
