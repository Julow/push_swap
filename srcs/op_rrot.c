/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rrot.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 19:28:27 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/16 19:28:31 by jaguillo         ###   ########.fr       */
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
	ft_tabrot(&(env->a), -1);
}

void			op_rrb(t_env *env)
{
	ft_tabrot(&(env->b), -1);
}

void			op_rrr(t_env *env)
{
	op_rra(env);
	op_rrb(env);
}
