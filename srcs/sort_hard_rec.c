/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hard_rec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/19 16:52:03 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/19 20:03:37 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

/*
** Op		Condition		Not after
** --
** sa		a > 1			sa, sb
** sb		b > 1			sb, sa
** ss		a > 1 & b > 1	sa, sb, ss
** pa		b > 0			pb
** pb		a > 0			pa
** ra		a > 2			rra, rb, rrr
** rb		b > 2			rrb, ra, rrr
** rr		a > 2 & b > 2	rrr, ra, rb
** rra		a > 2			ra, rrb, rr
** rrb		b > 2			rb, rra, rr
** rrr		a > 2 & b > 2	rr, rra, rrb
*/

static void		env_destroy(t_env *env)
{
	free(env->a.data);
	free(env->b.data);
	free(env->ops.data);
	free(env);
}

static t_env	*env_min(t_env *e1, t_env *e2)
{
	if (e1 == NULL)
		return (e2);
	if (e2 == NULL)
		return (e1);
	if (e1->ops.length <= e2->ops.length)
		return (env_destroy(e2), e1);
	env_destroy(e1);
	return (e2);
}

static t_env	*rec_next(t_env *env, int loop)
{
	t_op			last;
	int				min;
	t_env			*best;

	if (env->a.length == 0 && ft_dstackissort(&(env->a)))
		return (env);
	last = (env->ops.length > 0) ? *TLAST(t_op, env->ops) : nop;
	loop--;
	best = NULL;
	if (env->a.length > 1 && last != sa && last != sb)
		best = env_min(best, (env, sa, loop));
	if (env->b.length > 1 && last != sb && last != sa)
		best = env_min(best, (env, sb, loop));
	if (env->a.length > 1 && env->b.length > 1
		&& last != sa && last != sb && last != ss)
		best = env_min(best, (env, ss, loop));
	if (env->b.length > 0)
		best = env_min(best, (env, pa, loop));
	if (env->a.length > 0)
		best = env_min(best, (env, pb, loop));
	if (env->a.length > 2 && last != rra && last != rb && last != rrr)
		best = env_min(best, (env, ra, loop));
	if (env->b.length > 2 && last != rrb && last != ra && last != rrr)
		best = env_min(best, (env, rb, loop));
	if (env->a.length > 2 && env->b.length > 2
		&& last != rrr && last != ra && last != rb)
		best = env_min(best, (env, rr, loop));
	if (env->a.length > 2 && last != ra && last != rrb && last != rr)
		best = env_min(best, (env, rra, loop));
	if (env->b.length > 2 && last != rb && last != rra && last != rr)
		best = env_min(best, (env, rrb, loop));
	if (env->a.length > 2 && env->b.length > 2
		&& last != rr && last != rra && last != rrb)
		best = env_min(best, (env, rrr, loop));
}

static t_env	*rec_call(t_env *env, t_op op, int loop)
{
}

t_bool			sort_hard_rec(t_env *env)
{
	if (env->a.length > 10)
		return (false);

}
