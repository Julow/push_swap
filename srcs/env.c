/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 18:20:20 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/28 17:32:32 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

t_env			*env_new(void)
{
	t_env			*env;

	env = MAL1(t_env);
	ft_tabini(&(env->a), sizeof(int));
	ft_tabini(&(env->b), sizeof(int));
	ft_arrayini(&(env->steps));
	env->flags = 0;
	return (env);
}

void			env_kill(t_env *env)
{
	if (env == NULL)
		return ;
	free(env->a.data);
	free(env->b.data);
}

t_env			*env_dup(t_env *env)
{
	t_env			*dup;

	dup = MAL1(t_env);
	ft_tabini(&(dup->a), sizeof(int));
	ft_tabini(&(dup->b), sizeof(int));
	ft_arrayini(&(dup->steps));
	dup->flags = env->flags;
	ft_tabaddn(&(dup->a), env->a.data, env->a.length);
	ft_arrayapp(&(dup->steps), &(env->steps));
	return (dup);
}
