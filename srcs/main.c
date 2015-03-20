/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 17:13:07 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/20 13:56:21 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				main(int argc, char **argv)
{
	t_env			env;

	if (!parse_argv(&env, argc, argv))
		return (ft_fdprintf(2, ERROR), 1);
	if (FLAG(env.flags, FLAG_D))
		PS("Initial a: "), print_dstack(&(env.a));
	if (FLAG(env.flags, FLAG_I))
		interactive(&env);
	else if (!ft_dstackissort(&(env.a)) && !sort_hard(&env))
		sort_simple(&env);
	if (FLAG(env.flags, FLAG_D))
		PS("Final a: "), print_dstack(&(env.a));
	if (!ft_dstackissort(&(env.a)))
		PS("NOT SORT !!!\n");
	FL;
	return (0);
}
