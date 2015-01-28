/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 13:31:18 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/28 13:36:48 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool			is_sort(t_tab *tab)
{
	int				i;

	i = 0;
	while (++i < tab->length)
	{
		if (TG(int, tab, i) > TG(int, tab, i - 1))
			return (false);
	}
	return (true);
}
