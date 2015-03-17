/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rrot.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 19:28:27 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/17 19:23:11 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** rra : reverse rotate a
** (vers le bas, le dernier élément devient le premier).
** --
** rrb : reverse rotate b
** (vers le bas, le dernier élément devient le premier).
** --
** rrr : rra et rrb en même temps.
*/

void			op_rra(t_env *env)
{
	int				first;

	if (env->a.length >= 2)
	{
		first = DSG(env->a, 0);
		ft_memmove(env->a.data, env->a.data + 1, S(int, env->a.length));
		DSGSTART(env->a, 0) = first;
	}
}

void			op_rrb(t_env *env)
{
	int				first;

	if (env->b.length >= 2)
	{
		first = DSG(env->b, 0);
		ft_memmove(env->b.data, env->b.data + 1, S(int, env->b.length));
		DSGSTART(env->b, 0) = first;
	}
}

void			op_rrr(t_env *env)
{
	op_rra(env);
	op_rrb(env);
}
