/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   k_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 13:27:24 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/13 16:59:40 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pre_sort_b(int *arr_a, int *arr_b, int *arr_c)
{
	int	count;
	int	range;

	count = 1;
	range = ft_sqrd(arr_a[0]) * 1.6;
	while (arr_a[0] >= 1)
	{
		if (arr_a[1] <= arr_c[count])
		{
			pb(arr_a, arr_b);
			rb(arr_b);
			count++;
		}
		else if (index_check(range, count, arr_c[0]))
		{
			if (arr_a[1] < arr_c[count + range])
			{
				pb(arr_a, arr_b);
				count++;
			}
		}
		else
			ra(arr_a);
	}
}

int	move_calc(int *arr_b, int *arr_c)
{
	int	moves;

	moves = 0;
	while (moves != arr_b[0])
	{
		if (arr_b[moves] == arr_c[1])
			break ;
		moves++;
	}
	return (moves);
}

void	return_to_sender(int *arr_a, int *arr_b, int *arr_c)
{
	int	moves;

	while (arr_b[0] != 0)
	{
		moves = move_calc(arr_b, arr_c);
		if (moves > arr_b[0] / 2)
		{
			moves = arr_b[0] - moves;
			while (moves--)
				rrb(arr_b);
		}
		else
		{
			while (moves--)
				rb(arr_b);
		}
		pa(arr_a, arr_b);
		switch_index(arr_c);
	}
}

void	k_sort(int *arr_a, int *arr_b, int *arr_c)
{
	bubble_sort(arr_c, arr_c[0]);
	if (arr_a[0] == 2)
		sort_two(arr_a, arr_b, arr_c);
	if (is_sorted(arr_a, arr_c))
		free_all(arr_a, arr_b, arr_c, 0);
	if (arr_a[0] == 3)
		sort_three(arr_a);
	else if (arr_a[0] == 4)
		sort_four(arr_a, arr_b, arr_c);
	else if (arr_a[0] == 5)
		sort_five(arr_a, arr_b, arr_c);
	else
	{
		pre_sort_b(arr_a, arr_b, arr_c);
		return_to_sender(arr_a, arr_b, arr_c);
	}
	free_all(arr_a, arr_b, arr_c, 0);
}
