/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 13:44:25 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/27 18:41:38 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				main(int argc, char **argv)
{
	t_env			*env;

	env = env_new();
	if (!parse_argv(env, argv + 1))
		return (env_kill(env), ft_putstr_fd(ERROR, 2), 1);
	if (FLAG(FLAG_V))
		print_a("Initial a: ", env);
	sort(&env);
	if (env == NULL)
		ft_putstr_fd(ERROR, 2);
	else
		print_steps(env);
	env_kill(env);
	(void)argc;
	return (env_kill(env), 0);
}
