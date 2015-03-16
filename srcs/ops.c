/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 19:11:21 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/16 19:54:28 by jaguillo         ###   ########.fr       */
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

void			call_op(t_env *env, t_op op)
{
	if (FLAG(env->flags, FLAG_PRTED))
		PC(' ');
	else if (!FLAG(env->flags, FLAG_V))
		env->flags |= BIT(FLAG_PRTED);
	PS(g_ops[op].name);
	g_ops[op].op(env);
	if (FLAG(env->flags, FLAG_V))
		PC('\n'), print_verbose(env);
}
