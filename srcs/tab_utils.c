/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 15:00:50 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/27 17:31:05 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void			ft_tabrot(t_tab *tab, int rot)
{
	const int		len = ABS(rot) * tab->size;
	t_byte			tmp[len];

	rot %= tab->length;
	if (rot < 0)
	{
		ft_memcpy(tmp, tab->data, len);
		ft_memmove(tab->data, tab->data + len, len);
		ft_memcpy(tab->data + tab->bytes - len, tmp, len);
	}
	else
	{
		ft_memcpy(tmp, tab->data + tab->bytes - len, len);
		ft_memmove(tab->data + len, tab->data, len);
		ft_memcpy(tab->data, tmp, len);
	}
}
/*
void			*ft_tabchr(t_tab *tab, void *chr)
{
	void			*data;
	void			*end;

	data = tab->data;
	end = data + tab->bytes;
	while (data < end)
	{
		if (ft_memcmp(data, chr, tab->size) == 0)
			return (data);
		data += tab->size;
	}
	return (NULL);
}
*/
