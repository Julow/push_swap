/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 19:27:50 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/17 19:21:13 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** sa : swap a - intervertit les 2 premiers éléments au sommet de la pile a.
** (ne fait rien s’il n’y en a qu’un ou aucun).
** --
** sb : swap b - intervertit les 2 premiers éléments au sommet de la pile b.
** (ne fait rien s’il n’y en a qu’un ou aucun).
** --
** ss : sa et sb en même temps.
*/

void			op_sa(t_env *env)
{
	int				d;

	if (env->a.length >= 2)
	{
		d = DSGSTART(env->a, 0);
		DSGSTART(env->a, 0) = DSGSTART(env->a, 1);
		DSGSTART(env->a, 1) = d;
	}
}

void			op_sb(t_env *env)
{
	int				d;

	if (env->b.length >= 2)
	{
		d = DSGSTART(env->b, 0);
		DSGSTART(env->b, 0) = DSGSTART(env->b, 1);
		DSGSTART(env->b, 1) = d;
	}
}

void			op_ss(t_env *env)
{
	op_sa(env);
	op_sb(env);
}
