/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 13:44:25 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/27 21:41:44 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				main(int argc, char **argv)
{
	t_env			*env;
	t_env			*tmp;

	env = env_new();
	if (!parse_argv(env, argv + 1))
		return (env_kill(env), ft_putstr_fd(ERROR, 2), 1);
	if (FLAG(FLAG_A))
		print_a("Initial a: ", env);
	tmp = (FLAG(FLAG_V)) ? env_dup(env) : NULL;
	sort(&env);
	if (env == NULL)
		return (env_kill(env), ft_putstr_fd(ERROR, 2), 1);
	if (FLAG(FLAG_V))
		print_verbose(tmp, env);
	print_steps(env);
	(void)argc;
	return (env_kill(env), 0);
}
