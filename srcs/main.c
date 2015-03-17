/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 17:13:07 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/17 17:23:20 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				main(int argc, char **argv)
{
	t_env			env;

	if (!parse_argv(&env, argc, argv))
		return (ft_fdprintf(2, ERROR), 1);
	if (FLAG(env.flags, FLAG_I))
		interactive(&env);
	else
		sort(&env);
	return (0);
}
