/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hard.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/18 12:57:28 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/18 19:39:20 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

const t_sort	g_sorts[] = {
	{&sort_simple},
	{&sort_hard_2},
	{&sort_hard_3},
	{&sort_hard_pre},
	{NULL}
};

static t_bool	call_hard(t_env *env, t_tab *best, t_bool (*f)(t_env*))
{
	t_env			cpy;
	t_bool			ok;

	env_cpy(&cpy, env);
	cpy.flags |= BIT(FLAG_HARD);
	ft_tabini(&(cpy.ops), sizeof(t_op));
	ok = false;
	if (f(&cpy) && cpy.ops.length < best->length)
	{
		ft_tabclr(best);
		ft_tabaddn(best, cpy.ops.data, cpy.ops.length);
		ok = true;
	}
	free(cpy.a.data);
	free(cpy.b.data);
	free(cpy.ops.data);
	return (ok);
}

t_bool			sort_hard(t_env *env)
{
	t_tab			best;
	int				i;
	t_bool			ok;

	ok = false;
	ft_tabini(&best, sizeof(t_op));
	best.length = HARD_MAX * HARD_MAX;
	i = -1;
	while (g_sorts[++i].sort != NULL)
		if (call_hard(env, &best, g_sorts[i].sort))
			ok = true;
	i = -1;
	if (ok)
		while (++i < best.length)
			call_op(env, *TG(t_op, best, i));
	free(best.data);
	return (ok);
}
