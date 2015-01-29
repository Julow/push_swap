/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 18:15:00 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/29 14:19:47 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

const t_sort	g_sorts[] = {
	&sort_rot,
	&sort_rrot,
	&sort_a,
	&sort_simple,
	&sort_reverse,
	NULL
};

static t_env	*get_best_res(t_env *e1, t_env *e2)
{
	if (e1 == NULL || e2 == NULL)
		return ((e1 == NULL) ? e2 : e1);
	if (e1->steps.length <= e2->steps.length)
		return (env_kill(e2), e1);
	return (env_kill(e1), e2);
}

void			sort(t_env **env)
{
	int				i;
	t_env			*tmp;
	t_env			*best;

	best = NULL;
	i = -1;
	while (g_sorts[++i] != NULL)
	{
		tmp = g_sorts[i](env_dup(*env));
		if (((*env)->flags & FLAG_P) == FLAG_P)
			ft_printf(tmp ? "Algo %d :: %d ops\n" : "Algo %d :: FAIL\n",
				i, tmp ? tmp->steps.length : 0);
		best = get_best_res(best, tmp);
	}
	env_kill(*env);
	*env = best;
}
