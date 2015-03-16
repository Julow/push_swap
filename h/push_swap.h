/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 17:13:27 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/16 19:08:45 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

/*
** push_swap
** -
** Sort the argument list using only a set of operations and 2 stacks
** -
** Options:
**  -c		Color: enable colors on output
**  -v		Verbose: 'a' and 'b' are print after each operation
**  -d		Debug: print initial and final 'a' stack
**  -i		Interactive: prompt the user to do operation
*/

# define ERROR		"Error\n"

typedef struct	s_env
{
	t_tab			a;
	t_tab			b;
	int				flags;
}				t_env;

# define FLAG_V		1
# define FLAG_D		2
# define FLAG_C		3
# define FLAG_I		4

/*
** argv.c
*/
t_bool			parse_argv(t_env *env, int argc, char **argv);

/*
** sort.c
*/
void			sort(t_env *env);

/*
** print.c
*/
void			print_stack(t_tab *tab);

/*
** utils
*/
t_bool			ft_sisint(const char *s);

#endif
