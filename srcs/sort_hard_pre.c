/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hard_pre.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/18 18:40:02 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/18 19:38:47 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

const t_presort	g_presort[] = {
	{2, "\x00\x01", "\x00\xFF"},
	{3, "\x00\x01\x02", "\x00\x08\xFF"},
	{3, "\x02\x00\x01", "\x00\xFF"},
};

static void		normalize(t_dstack *s, char *buff)
{
	int				i;
	int				j;
	int				min;
	int				count;

	count = -1;
	i = -1;
	while (++i < s->length)
	{
		min = 0;
		while (buff[min] != '\xFF')
			min++;
		j = min;
		while (++j < s->length)
			if (buff[j] == '\xFF' && s->data[j] < s->data[min])
				min = j;
		buff[min] = ++count;
	}
}

t_bool			sort_hard_pre(t_env *env)
{
	// char			tmp[env->a.length];

	// if (env->a.length < 2 || env->a.length > 3)
	// 	return (false);
	// normalize(&(env->a), tmp);
	// return (false);
	char			tmp[env->a.length];
	int				i;

	i = -1;
	while (++i < env->a.length)
		PI(env->a.data[i]), PC(' ');
	NL;
	normalize(&(env->a), tmp);
	i = -1;
	while (++i < env->a.length)
		PI(tmp[i]), PC(' ');
	NL;
	return (true);
}
