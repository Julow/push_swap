/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 19:07:19 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/16 20:03:15 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			sort(t_env *env)
{
	if (FLAG(env->flags, FLAG_D))
		PS("Initial a: "), print_stack(&(env->a));
	/*
	** TODO
	*/
	NL;
	if (FLAG(env->flags, FLAG_D))
		PS("Final a: "), print_stack(&(env->a));
}
