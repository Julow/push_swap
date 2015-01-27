/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 18:50:10 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/27 18:56:21 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

const t_op		operators[] = {
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

void			call_op(t_env *env, const char *name)
{
	int				i;

	i = -1;
	while (operators[++i].op != NULL)
	{
		if (ft_strequ(name, operators[i].name))
		{
			ft_arrayadd(&(env->steps), operators[i].name);
			operators[i].op(env);
			break ;
		}
	}
}
