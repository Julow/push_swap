/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 19:29:00 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/17 19:22:55 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** pa : push a - prend le premier élément au sommet de b et le met sur a.
** (ne fait rien si b est vide).
** --
** pb : push b - prend le premier élément au sommet de a et le met sur b.
** (ne fait rien si a est vide).
*/

void			op_pa(t_env *env)
{
	if (env->b.length == 0)
		return ;
	DSPUSH(env->a, DSPOP(env->b));
}

void			op_pb(t_env *env)
{
	if (env->a.length == 0)
		return ;
	DSPUSH(env->b, DSPOP(env->a));
}
