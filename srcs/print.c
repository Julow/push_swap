/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 18:43:53 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/17 19:18:59 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			print_dstack(t_dstack *s)
{
	int				i;

	i = -1;
	while (++i < s->length)
	{
		if (i > 0)
			PC(' ');
		PI(DSG(*s, i));
	}
	NL;
}

void			print_verbose(t_env *env)
{
	if (env->a.length > 0)
		PS("a: "), print_dstack(&(env->a));
	if (env->b.length > 0)
		PS("b: "), print_dstack(&(env->b));
}
