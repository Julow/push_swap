/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 15:00:50 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/28 10:52:41 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		ft_abs(int a)
{
	return ((a < 0) ? -a : a);
}

void			ft_tabcpy(t_tab *tab, void *dst, int index)
{
	if (index >= tab->length || index < 0)
		ft_bzero(dst, tab->size);
	else
		ft_memcpy(dst, tab->data + (tab->size * index), tab->size);
}

void			ft_tablast(t_tab *tab, void *dst)
{
	ft_tabcpy(tab, dst, tab->length - 1);
}

static void		tabrot(t_tab *tab, int rot)
{
	const int		len = ft_abs(rot %= tab->length) * tab->size;
	t_byte			tmp[len];

	if (rot < 0)
	{
		ft_memcpy(tmp, tab->data, len);
		ft_memmove(tab->data, tab->data + len, tab->bytes - len);
		ft_memcpy(tab->data + tab->bytes - len, tmp, len);
	}
	else
	{
		ft_memcpy(tmp, tab->data + tab->bytes - len, len);
		ft_memmove(tab->data + len, tab->data, tab->bytes - len);
		ft_memcpy(tab->data, tmp, len);
	}
}

void			ft_tabrot(t_tab *tab, int rot)
{
	if (rot != 0 && tab->length > 0)
		tabrot(tab, rot);
}
