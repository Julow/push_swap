/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hard_pre.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/18 18:40:02 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/19 15:55:25 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

const t_presort	g_presort[] = {
	{"\x01\x02", "\x00\x7F"},
	{"\x03\x02\x01", "\x7F"},
	{"\x03\x01\x02", "\x00\x7F"},
	{"\x01\x03\x02", "\x08\x7F"},
	{"\x02\x03\x01", "\x08\x00\x7F"},
	{"\x01\x02\x03", "\x00\x08\x7F"},
	{"\x02\x01\x03", "\x05\x7F"},
	{NULL, NULL}
};

static void		normalize(char *dst, const int *tab, int len)
{
	int				i;
	int				j;
	char			count;
	int				min;

	i = -1;
	count = 0;
	while (++i < len)
	{
		min = 0;
		while (dst[min] != '\0' && min < len)
			min++;
		j = min;
		while (++j < len)
			if (dst[j] == '\0' && tab[j] < tab[min])
				min = j;
		dst[min] = ++count;
	}
}

static void		call_pre_ops(t_env *env, const char *ops)
{
	while (*ops != nop)
	{
		call_op(env, *ops);
		ops++;
	}
}

t_bool			sort_hard_pre(t_env *env)
{
	char			order[env->a.length + 1];
	int				i;

	ft_bzero(order, env->a.length + 1);
	normalize(order, env->a.data, env->a.length);
	i = -1;
	while (g_presort[++i].order != NULL)
		if (ft_strequ(order, g_presort[i].order))
			return (call_pre_ops(env, g_presort[i].ops), true);
	return (false);
}
