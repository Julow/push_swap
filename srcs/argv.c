/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 16:21:11 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/28 10:54:16 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_bool	push_arg(t_env *env, char *arg)
{
	int				tmp;

	tmp = (arg[0] == '-') ? 1 : 0;
	while (arg[tmp] >= '0' && arg[tmp] <= '9')
		tmp++;
	if (arg[tmp] != '\0' || tmp == ((arg[0] == '-') ? 1 : 0)
		|| (*arg == '-' && tmp >= 11 && ft_strcmp(arg, "-2147483648") > 0)
		|| (*arg != '-' && tmp >= 10 && ft_strcmp(arg, "2147483647") > 0))
		return (false);
	tmp = ft_atoi(arg);
	if (ft_tabchr(&(env->a), &tmp) != -1)
		return (false);
	ft_tabadd(&(env->a), &tmp);
	return (true);
}

static t_bool	parse_flags(t_env *env, char *flags)
{
	while (*(++flags) != '\0')
	{
		if (*flags == 'v')
			env->flags |= FLAG_V | FLAG_A;
		else if (*flags == 'a')
			env->flags |= FLAG_A;
		else if (*flags == 'i')
			env->flags |= FLAG_I | FLAG_A;
		else if (*flags == 'c')
			env->flags |= FLAG_C;
		else
			return (false);
	}
	return (true);
}

t_bool			parse_argv(t_env *env, char **argv)
{
	if (*argv != NULL && **argv == '-' && !ft_isdigit((*argv)[1])
		&& !parse_flags(env, *(argv++)))
		return (false);
	while (*argv != NULL)
	{
		if (!push_arg(env, *argv))
			return (false);
		argv++;
	}
	return (true);
}
