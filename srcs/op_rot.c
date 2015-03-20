/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 19:28:42 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/20 14:50:44 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** ra : rotate a - décale d’une position tous les élements de la pile a.
** (vers le haut, le premier élément devient le dernier).
** --
** rb : rotate b - décale d’une position tous les élements de la pile b.
** (vers le haut, le premier élément devient le dernier).
** --
** rr : ra et rb en meme temps.
*/

void			op_ra(t_env *env)
{
	int				first;

	if (env->a.length >= 2)
	{
		first = DSGSTART(env->a, 0);
		ft_memmove(env->a.data + 1, env->a.data, S(int, env->a.length - 1));
		DSG(env->a, 0) = first;
	}
}

void			op_rb(t_env *env)
{
	int				first;

	if (env->b.length >= 2)
	{
		first = DSGSTART(env->b, 0);
		ft_memmove(env->b.data + 1, env->b.data, S(int, env->b.length - 1));
		DSG(env->b, 0) = first;
	}
}

void			op_rr(t_env *env)
{
	op_ra(env);
	op_rb(env);
}
