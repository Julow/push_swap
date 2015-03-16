/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 17:13:07 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/16 19:55:40 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				main(int argc, char **argv)
{
	t_env			env;

	ft_tabini(&(env.a), sizeof(int));
	ft_tabini(&(env.b), sizeof(int));
	env.flags = 0;
	if (!parse_argv(&env, argc, argv))
		return (ft_fdprintf(2, ERROR), 1);
	if (FLAG(env.flags, FLAG_D))
		PS("Initial a: "), print_stack(&(env.a));
	sort(&env);
	if (FLAG(env.flags, FLAG_D))
		PS("Final a: "), print_stack(&(env.a));
	return (0);
}
