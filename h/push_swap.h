/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 13:36:18 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/28 17:36:21 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

# define ERROR			"Error\n"

# define FLAG(f)		((env->flags & (f)) == (f))

# define FLAG_V			(1)
# define FLAG_A			(1 << 1)
# define FLAG_C			(1 << 2)
# define FLAG_I			(1 << 3)

typedef struct	s_env
{
	t_tab			a;
	t_tab			b;
	t_array			steps;
	int				flags;
}				t_env;

typedef struct	s_op
{
	char			*name;
	void			(*op)(t_env *env);
}				t_op;

typedef t_env	*(*t_sort)(t_env*);

/*
** Operators
*/
t_bool			call_op(t_env *env, const char *name);

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
** Sorting
*/
void			sort(t_env **env);

t_env			*sort_simple(t_env *env);
t_env			*sort_simpler(t_env *env);

t_env			*sort_rot(t_env *env);
t_env			*sort_rrot(t_env *env);

/*
** env.c
*/
t_env			*env_new(void);
void			env_kill(t_env *env);
t_env			*env_dup(t_env *env);

/*
** argv.c
*/
t_bool			parse_argv(t_env *env, int argc, char **argv);

/*
** print.c
*/
void			print_a(const char *prefix, t_env *env);
void			print_ab(t_env *env);
void			print_steps(t_env *env);
void			print_verbose(t_env *env, t_env *sorted);

/*
** interactive
*/
void			interactive(t_env *env);

/*
** utils.c
*/
t_bool			is_sort(t_tab *tab);

/*
** tab_utils.c
*/
void			ft_tabcpy(t_tab *tab, void *dst, int index);
void			ft_tablast(t_tab *tab, void *dst);
void			ft_tabrot(t_tab *tab, int rot);

#endif
