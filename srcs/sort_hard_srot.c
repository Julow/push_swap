/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hard_srot.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/20 13:53:34 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/20 16:12:16 by jaguillo         ###   ########.fr       */
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
		i = len % env->a.length;
		while (i-- > 0)
			ft_tabpop(&(env->ops));
		i = env->a.length - len;
		last = (last == ra) ? rra : ra;
		while (i-- > 0)
			ft_tabadd(&(env->ops), &last);
	}
	return (true);
}

static int		get_biggest(t_env *env)
{
	int				big;
	int				i;

	if (env->a.length <= 0)
		return (0);
	big = env->a.data[0];
	i = 0;
	while (++i < env->a.length)
		if (env->a.data[i] > big)
			big = env->a.data[i];
	return (big);
}

t_bool			sort_hard_srot(t_env *env)
{
	int				max;
	const int		biggest = get_biggest(env);

	max = env->a.length * 2 + 1;
	while (max-- > 0)
	{
		call_op(env, ra);
		if (DSGSTART(env->a, 0) > DSGSTART(env->a, 1)
			&& DSGSTART(env->a, 0) != biggest)
		{
			opti_ra(env);
			call_op(env, sa);
		}
		if (ft_dstackissort(&(env->a)))
			return (opti_ra(env));
	}
	return (false);
}

t_bool			sort_hard_srot2(t_env *env)
{
	int				max;
	const int		biggest = get_biggest(env);

	max = env->a.length * 2 + 1;
	while (max-- > 0)
	{
		if (DSGSTART(env->a, 0) > DSGSTART(env->a, 1)
			&& DSGSTART(env->a, 0) != biggest)
		{
			opti_ra(env);
			call_op(env, sa);
		}
		if (ft_dstackissort(&(env->a)))
			return (opti_ra(env));
		call_op(env, ra);
	}
	return (false);
}

t_bool			sort_hard_srrot(t_env *env)
{
	int				max;
	const int		biggest = get_biggest(env);

	max = env->a.length * 20 + 1;
	while (max-- > 0)
	{
		if (DSGSTART(env->a, 0) > DSGSTART(env->a, 1)
			&& DSGSTART(env->a, 0) != biggest)
		{
			opti_ra(env);
			call_op(env, sa);
		}
		if (ft_dstackissort(&(env->a)))
			return (opti_ra(env));
		call_op(env, rra);
	}
	return (false);
}
