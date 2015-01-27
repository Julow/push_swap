/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 14:55:51 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/27 15:43:17 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

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
