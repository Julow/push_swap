/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 14:49:12 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/27 17:31:01 by jaguillo         ###   ########.fr       */
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
	if (env->a.length >= 2)
		ft_tabswap(&(env->a), env->a.length - 1, env->a.length - 2);
}

void			op_sb(t_env *env)
{
	if (env->b.length >= 2)
		ft_tabswap(&(env->b), env->b.length - 1, env->b.length - 2);
}

void			op_ss(t_env *env)
{
	op_sa(env);
	op_sb(env);
}
