/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 19:50:04 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/16 19:50:15 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_tabcpy(t_tab *tab, void *dst, int index)
{
	if (index >= tab->length || index < 0)
		ft_bzero(dst, tab->size);
	else
		ft_memcpy(dst, tab->data + (tab->size * index), tab->size);
}
