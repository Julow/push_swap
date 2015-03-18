/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/18 17:58:25 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/18 18:02:59 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			env_cpy(t_env *dst, t_env *env)
{
	ft_memcpy(dst, env, sizeof(t_env));
	dst->a.data = ft_memdup(env->a.data, S(int, env->stack_size));
	dst->b.data = ft_memdup(env->b.data, S(int, env->stack_size));
}
