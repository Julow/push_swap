/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 18:01:59 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/16 19:44:20 by jaguillo         ###   ########.fr       */
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
			if (argv[i][j] == '-')
				return (i + 1);
			else if (argv[i][j] == 'v')
				env->flags |= BIT(FLAG_V);
			else if (argv[i][j] == 'd')
				env->flags |= BIT(FLAG_D);
			else if (argv[i][j] == 'c')
				env->flags |= BIT(FLAG_C);
			else if (argv[i][j] == 'i')
				env->flags |= BIT(FLAG_I);
			else
				return (-1);
		i++;
	}
	return (i);
}

t_bool			parse_argv(t_env *env, int argc, char **argv)
{
	int				i;
	int				tmp;

	if ((i = parse_options(env, argc, argv)) < 0)
		return (false);
	ft_tabext(&(env->a), argc - i);
	ft_tabext(&(env->b), argc - i);
	while (i < argc)
	{
		if (!ft_sisint(argv[i]))
			return (false);
		tmp = ft_atoi(argv[i]);
		if (ft_tabchr(&(env->a), &tmp) >= 0)
			return (false);
		ft_tabadd(&(env->a), &tmp);
		i++;
	}
	if (env->a.length <= 0)
		return (false);
	return (true);
}
