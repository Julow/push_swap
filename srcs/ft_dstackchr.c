/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dstackchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/17 17:24:24 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/17 19:25:49 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				ft_dstackchr(t_dstack *s, int chr)
{
	int				i;

	i = s->length - 1;
	while (i >= 0)
	{
		if (DSG(*s, i) == chr)
			return (i);
		i--;
	}
	return (i);
}
