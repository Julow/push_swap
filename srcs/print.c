/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 18:43:53 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/16 19:43:25 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			print_stack(t_tab *tab)
{
	int				i;

	i = -1;
	while (++i < tab->length)
	{
		if (i > 0)
			PC(' ');
		PI(*TG(int, *tab, i));
	}
	NL;
}

void			print_verbose(t_env *env)
{
	if (env->a.length > 0)
		PS("a: "), print_stack(&(env->a));
	if (env->b.length > 0)
		PS("b: "), print_stack(&(env->b));
}
