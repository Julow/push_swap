/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 18:01:59 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/18 16:29:37 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		parse_options(t_env *env, int argc, char **argv)
{
	int				i;
	int				j;

	i = 1;
	while (i < argc && argv[i][0] == '-' && argv[i][1] != '\0')
	{
		j = 0;
		while (argv[i][++j] != '\0')
			if (argv[i][j] == 'v')
				env->flags |= BIT(FLAG_V) | BIT(FLAG_D);
			else if (argv[i][j] == 'd')
				env->flags |= BIT(FLAG_D);
			else if (argv[i][j] == 'c')
				env->flags |= BIT(FLAG_C);
			else if (argv[i][j] == 'i')
				env->flags |= BIT(FLAG_I) | BIT(FLAG_Q);
			else if (argv[i][j] == 'q')
				env->flags |= BIT(FLAG_Q);
			else
				return (i + 1);
		i++;
	}
	return (i);
}

t_bool			parse_argv(t_env *env, int argc, char **argv)
{
	int				i;
	int				tmp;

	env->flags = 0;
	if ((i = parse_options(env, argc, argv)) < 0)
		return (false);
	env->stack_size = argc - i;
	ft_dstackinit(&(env->a), env->stack_size);
	ft_dstackinit(&(env->b), env->stack_size);
	while (i < argc)
	{
		if (!ft_sisint(argv[i]))
			return (false);
		tmp = ft_atoi(argv[i]);
		if (ft_dstackchr(&(env->a), tmp) >= 0)
			return (false);
		DSPUSH(env->a, tmp);
		i++;
	}
	if (env->a.length == 0)
		return (false);
	return (true);
}
