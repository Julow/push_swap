/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 14:48:54 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/27 17:11:09 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

/*
** pa : push a - prend le premier élément au sommet de b et le met sur a.
** (ne fait rien si b est vide).
** --
** pb : push b - prend le premier élément au sommet de a et le met sur b.
** (ne fait rien si a est vide).
*/

void			op_pa(t_env *env)
{
	int				tmp;

	if (env->b.length <= 0)
		return ;
	ft_tablast(&(env->b), &tmp);
	ft_tabpop(&(env->b));
	ft_tabadd(&(env->a), &tmp);
}

void			op_pb(t_env *env)
{
	int				tmp;

	if (env->a.length <= 0)
		return ;
	ft_tablast(&(env->a), &tmp);
	ft_tabpop(&(env->a));
	ft_tabadd(&(env->b), &tmp);
}
