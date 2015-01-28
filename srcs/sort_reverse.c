/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_reverse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 18:08:02 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/28 18:16:11 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_env			*sort_reverse(t_env *env)
{
	int				i;

	i = env->a.length - 1;
	while (--i > 0)
	{
		call_op(env, "pb");
		call_op(env, "rra");
	}
	while (env->b.length > 0)
		call_op(env, "pa");
	call_op(env, "ra");
	return (is_sort(&(env->a)) ? env : NULL);
}
