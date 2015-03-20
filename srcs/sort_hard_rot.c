/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hard_sa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/20 13:53:34 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/20 15:01:15 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_bool	opti_ra(t_env *env)
{
	int				i;
	int				len;
	t_op			last;

	len = env->ops.length - 1;
	if (len <= 0)
		return (true);
	last = env->ops.data[len--];
	if (last != rra && last != ra)
		return (true);
	while (len >= 0 && env->ops.data[len] == last)
		len--;
	len = env->ops.length - len;
	if (len > (env->a.length / 2))
	{
		i = len;
		while (i-- > 0)
			ft_tabpop(&(env->ops));
		i = env->a.length - len;
		while (i-- > 0)
			call_op(env, (last == ra) ? rra : ra);
	}
	return (true);
}

t_bool			sort_hard_rot(t_env *env)
{
	int				max;

	max = env->a.length * 2 + 1;
	while (max-- > 0)
	{
		call_op(env, ra);
		if (DSGSTART(env->a, 0) > DSGSTART(env->a, 1))
			call_op(env, sa);
		if (ft_dstackissort(&(env->a)))
			return (opti_ra(env));
	}
	return (false);
}

t_bool			sort_hard_rot2(t_env *env)
{
	int				max;

	max = env->a.length * 2 + 1;
	while (max-- > 0)
	{
		if (DSGSTART(env->a, 0) > DSGSTART(env->a, 1))
			call_op(env, sa);
		if (ft_dstackissort(&(env->a)))
			return (opti_ra(env));
		call_op(env, ra);
	}
	return (false);
}

t_bool			sort_hard_rrot(t_env *env)
{
	int				max;

	max = env->a.length * 2 + 1;
	while (max-- > 0)
	{
		if (DSGSTART(env->a, 0) > DSGSTART(env->a, 1))
			call_op(env, sa);
		if (ft_dstackissort(&(env->a)))
			return (opti_ra(env));
		call_op(env, rra);
	}
	return (false);
}
