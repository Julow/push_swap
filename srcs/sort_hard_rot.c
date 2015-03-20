/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hard_rot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/20 13:53:34 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/20 16:16:48 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool			sort_hard_first(t_env *env)
{
	call_op(env, rra);
	call_op(env, rra);
	call_op(env, sa);
	call_op(env, ra);
	call_op(env, ra);
	return (ft_dstackissort(&(env->a)));
}
