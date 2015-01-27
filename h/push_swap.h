/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 13:36:18 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/27 18:45:30 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_H
# define SWAP_H

# include "libft.h"

# define ERROR			"Error\n"

# define FLAG(f)		((env->flags & (f)) == (f))

# define FLAG_V			(1)
# define FLAG_C			(1 << 1)

typedef struct	s_env
{
	t_tab			a;
	t_tab			b;
	t_array			steps;
	int				flags;
}				t_env;

/*
** Operators
*/
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
** env.c
*/
t_env			*env_new();
void			env_kill(t_env *env);
t_env			*env_dup(t_env *env);

/*
** argv.c
*/
t_bool			parse_argv(t_env *env, char **argv);

/*
** sort.c
*/
void			sort(t_env **env);

/*
** print.c
*/
void			print_a(t_env *env);
void			print_ab(t_env *env);
void			print_steps(t_env *env);

/*
** tab_utils.c
*/
void			ft_tabcpy(t_tab *tab, void *dst, int index);
void			ft_tablast(t_tab *tab, void *dst);
void			ft_tabrot(t_tab *tab, int rot);

#endif
