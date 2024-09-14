/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:46:09 by jngew             #+#    #+#             */
/*   Updated: 2024/09/14 17:22:41 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include "../libft/libft.h"
# include "../printf/ft_printf.h"

typedef struct s_stack
{
	long			number;
	long			index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

int		ft_checkdup(t_stack *a);
int		ft_checksorted(t_stack *a);
int		check_sign(int x);
int		check_space(int x);
int		ft_checkerror(char **argv, int x, int y);
void	ft_alphacheck(char **argv);
int		ft_checkargs(char **argv);
void	ft_free(t_stack **list);
void	ft_error(void);
void	ft_freestr(char **list);
void	list_args(char **argv, t_stack **a);
t_stack	*ft_buildstack(int argc, char **argv);
t_stack	*ft_buildstack_args(char **argv);
int		ft_rarb_b(t_stack *a, t_stack *b, int x);
int		ft_rrarrb_b(t_stack *a, t_stack *b, int x);
int		ft_rrarb_b(t_stack *a, t_stack *b, int x);
int		ft_rarrb_b(t_stack *a, t_stack *b, int x);
int		ft_rarb_a(t_stack *a, t_stack *b, int x);
int		ft_rrarrb_a(t_stack *a, t_stack *b, int x);
int		ft_rarrb_a(t_stack *a, t_stack *b, int x);
int		ft_rrarb_a(t_stack *a, t_stack *b, int x);
void	ft_addback(t_stack **stack, t_stack *stack_new);
t_stack	*ft_newstack(int data);
int		ft_atoi2(const char *str);
t_stack	*ft_subprocess(char **argv);
t_stack	*ft_process(int argc, char **argv);
int		ft_min(t_stack *a);
int		ft_max(t_stack *a);
int		ft_findindex(t_stack *a, int num);
int		ft_findplace_b(t_stack *b, int num_push);
int		ft_findplace_a(t_stack *a, int num_push);
void	ft_swapa(t_stack **a, int x);
void	ft_pusha(t_stack **a, t_stack **b, int x);
void	ft_rotatea(t_stack **a, int x);
void	ft_rev_rotate(t_stack **a, int x);
void	ft_swapb(t_stack **b, int x);
void	ft_pushb(t_stack **a, t_stack **b, int x);
void	ft_rotateb(t_stack **b, int x);
void	ft_rev_rotateb(t_stack **b, int x);
void	ft_ss_ab(t_stack **a, t_stack **b, int x);
void	ft_rr_ab(t_stack **a, t_stack **b, int x);
void	ft_rrr_ab(t_stack **a, t_stack **b, int x);
void	ft_rrr_absub(t_stack **b, int x);

#endif