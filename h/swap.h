/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 13:36:18 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/27 14:35:19 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_H
# define SWAP_H

typedef struct	s_stack
{
	int				*data;
	int				length;
}				t_stack;

typedef struct	s_env
{
	t_stack			a;
	t_stack			b;
}				t_env;

#endif
