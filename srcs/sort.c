/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 18:15:00 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/27 18:45:27 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

const void		*sorts = {
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

	*env = NULL;
	i = -1;
	while (sorts[++i] != NULL)
		*env = get_best_res(*env, sorts[i](env_dup(env)));
}
