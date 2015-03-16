/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 19:28:42 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/16 19:28:46 by jaguillo         ###   ########.fr       */
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
	ft_tabrot(&(env->a), 1);
}

void			op_rb(t_env *env)
{
	ft_tabrot(&(env->b), 1);
}

void			op_rr(t_env *env)
{
	op_ra(env);
	op_rb(env);
}
