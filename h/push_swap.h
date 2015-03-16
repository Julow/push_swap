/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 17:13:27 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/16 20:11:37 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

/*
** ========================================================================== **
** push_swap
** -
** Sort the argument list using only a set of operations and 2 stacks
** -
** Options:
**  -c		Color: enable colors on output
**  -v		Verbose: 'a' and 'b' are print after each operation
**  -d		Debug: print initial and final 'a' stack
**  -i		Interactive: prompt the user to do operation (enable -q)
**  -q		Quiet: don't print operations
** ========================================================================== **
*/

typedef struct	s_env
{
	t_tab			a;
	t_tab			b;
	int				flags;
}				t_env;

/*
** ========================================================================== **
** argv
*/

t_bool			parse_argv(t_env *env, int argc, char **argv);

# define FLAG_V		1
# define FLAG_D		2
# define FLAG_C		3
# define FLAG_I		4
# define FLAG_Q		5

/*
** ========================================================================== **
** operators
*/

typedef enum	e_op
{
	sa = 0,
	sb = 1,
	ss = 2,
	pa = 3,
	pb = 4,
	ra = 5,
	rb = 6,
	rr = 7,
	rra = 8,
	rrb = 9,
	rrr = 10
}				t_op;

typedef struct	s_opdef
{
	char			*name;
	void			(*op)(t_env *env);
}				t_opdef;

void			call_op(t_env *env, t_op op);
t_bool			call_op_str(t_env *env, const char *op);

void			op_sa(t_env *env);
void			op_sb(t_env *env);
void			op_ss(t_env *env);
void			op_pa(t_env *env);
void			op_pb(t_env *env);
void			op_ra(t_env *env);
void			op_rb(t_env *env);
void			op_rr(t_env *env);
void			op_rra(t_env *env);
void			op_rrb(t_env *env);
void			op_rrr(t_env *env);

/*
** ========================================================================== **
** sort
*/

void			sort(t_env *env);

void			interactive(t_env *env);

/*
** ========================================================================== **
** print
*/

# define ERROR		"Error\n"

# define FLAG_PRTED	31

void			print_stack(t_tab *tab);
void			print_verbose(t_env *env);

/*
** ========================================================================== **
** utils
*/

# define TLAST(t,b)		(TG(t, b, (b).length - 1))

t_bool			ft_sisint(const char *s);

int				ft_abs(int a);

void			ft_tabcpy(t_tab *tab, void *dst, int index);
void			ft_tabrot(t_tab *tab, int rot);

/*
** ========================================================================== **
*/

#endif
