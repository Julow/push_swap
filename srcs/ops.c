/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 19:11:21 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/18 13:13:04 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_opdef			g_ops[] = {
	{"sa", &op_sa},
	{"sb", &op_sb},
	{"ss", &op_ss},
	{"pa", &op_pa},
	{"pb", &op_pb},
	{"ra", &op_ra},
	{"rb", &op_rb},
	{"rr", &op_rr},
	{"rra", &op_rra},
	{"rrb", &op_rrb},
	{"rrr", &op_rrr},
	{NULL, NULL}
};

void			call_ops_tab(t_env *env)
{
	int				i;

	i = -1;
	while (++i < env->ops.length)
		call_op(env, *TG(t_op, env->ops, i));
}

void			call_op(t_env *env, t_op op)
{
	if (!FLAG(env->flags, FLAG_Q))
	{
		if (FLAG(env->flags, FLAG_PRTED))
			PC(' ');
		else if (!FLAG(env->flags, FLAG_V))
			env->flags |= BIT(FLAG_PRTED);
		PS(g_ops[op].name);
		if (FLAG(env->flags, FLAG_V))
			PC('\n');
	}
	g_ops[op].op(env);
	if (FLAG(env->flags, FLAG_V))
		print_verbose(env);
}

void			call_op_hard(t_env *env, t_op op)
{
	ft_tabadd(&(env->ops), &op);
	g_ops[op].op(env);
}

t_bool			call_op_str(t_env *env, const char *op)
{
	int				i;

	i = -1;
	while (g_ops[++i].name != NULL)
	{
		if (ft_strequ(g_ops[i].name, op))
			return (call_op(env, i), true);
	}
	return (false);
}
