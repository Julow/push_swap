/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dstackmin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/17 17:59:23 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/17 19:19:38 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				ft_dstackmin(t_dstack *s)
{
	int				i;
	int				min;

	min = 0;
	i = 0;
	while (++i < s->length)
		if (DSG(*s, i) < DSG(*s, min))
			min = i;
	return (min);
}
