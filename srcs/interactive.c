/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interactive.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 20:01:39 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/18 12:52:36 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			interactive(t_env *env)
{
	t_buff			op;

	PS("#### Interactive Mode\nEnter an operator or '' to print the stacks\n");
	if (FLAG(env->flags, FLAG_D))
		PS("Initial a: "), print_dstack(&(env->a));
	PS("OP> "), FL;
	while (get_next_line(0, &op) > 0)
	{
		if (op.length == 0)
			print_verbose(env);
		else if (!call_op_str(env, op.data))
			PS(ERROR);
		PS("OP> "), FL;
	}
	PC('\n');
	if (FLAG(env->flags, FLAG_D))
		PS("Final a: "), print_dstack(&(env->a));
	if (!ft_dstackissort(&(env->a)) || env->b.length > 0)
		PS("Fail: Not sorted"), NL;
}
