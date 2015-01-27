/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 13:44:25 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/27 17:31:10 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

static void		env_init(t_env *env)
{
	ft_tabini(&(env->a), sizeof(int));
	ft_tabini(&(env->b), sizeof(int));
}

static void		env_kill(t_env *env)
{
	free(env->a.data);
	free(env->b.data);
}

int				main(int argc, char **argv)
{
	t_env			env;

	env_init(&env);
	if (!parse_argv(&env, argv + 1))
		return (env_kill(&env), ft_putstr_fd("Error\n", 2), 1);
	print_stacks(&env);
	(void)argc;
	return (env_kill(&env), 0);
}
