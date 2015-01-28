/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interactive.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 10:38:52 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/28 10:54:45 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			interactive(t_env *env)
{
	t_buff			line;

	while (get_next_line(0, &line))
	{
		ft_parsespace(&line);
		if (!call_op(env, line.data + line.i))
			ft_putstr_fd(ERROR, 2);
		else
			print_ab(env);
	}
}
