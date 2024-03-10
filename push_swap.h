/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:26:05 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/10 17:23:36 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"

int		init_arr(int argc, char **argv);
int		num_check(int argc, char **argv);
int		sa(int *arr_a);
int		sb(int *arr_b);
int		ss(int *arr_a, int *arr_b);
int		rrr(int *arr_a, int *arr_b);
int		rra(int *arr_a);
int		rrb(int *arr_b);
int		pa(int *arr_a, int *arr_b);
int		pb(int *arr_a, int *arr_b);
int		ft_sqrd(int nb);
void	sort_two(int *arr_a);
void	sort_three(int *arr_a);
void	sort_four(int *arr_a, int *arr_b, int *arr_c);
void	sort_five(int *arr_a, int *arr_b, int *arr_c);
void	bubble_sort(int *arr_c, int n);
int		check_doubles(int *arr_a, int len);
