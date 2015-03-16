/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interactive.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 20:01:39 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/16 20:13:45 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			interactive(t_env *env)
{
	t_buff			op;

	if (FLAG(env->flags, FLAG_D))
		PS("Initial a: "), print_stack(&(env->a));
	PS("OP> "), FL;
	while (get_next_line(0, &op) > 0)
	{
		if (!call_op_str(env, op.data))
			PS(ERROR);
		PS("OP> "), FL;
	}
	if (FLAG(env->flags, FLAG_D))
		PS("Final a: "), print_stack(&(env->a));
}
