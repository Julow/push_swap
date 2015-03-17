/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dstackissort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/17 19:37:16 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/17 20:02:05 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool			ft_dstackissort(t_dstack *s)
{
	int				i;

	i = 0;
	while (++i < s->length)
		if (DSG(*s, i - 1) < DSG(*s, i))
			return (false);
	return (true);
}
