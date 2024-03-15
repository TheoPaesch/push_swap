/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   k_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 13:27:24 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/15 08:20:33 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pre_sort_b(int *arr_a, int *arr_b)
{
	int	count;
	int	range;

	count = 0;
	range = ft_sqrd(arr_a[0]) * 1.6;
	while (arr_a[0] > 0)
	{
		if (arr_a[1] <= count)
		{
			pb(arr_a, arr_b);
			rb(arr_b);
			count++;
		}
		else if (arr_a[1] < count + range)
		{
			pb(arr_a, arr_b);
			count++;
		}
		else
			ra(arr_a);
	}
}

int	move_calc(int *arr_b)
{
	int	moves;
	int	i;

	i = 1;
	moves = 0;
	while (moves != arr_b[0])
	{
		if (arr_b[i] == arr_b[0])
			break ;
		moves++;
		i++;
	}
	return (moves);
}

void	return_to_sender(int *arr_a, int *arr_b, int *arr_c, int len)
{
	int	moves;

	while (arr_b[0] > 0)
	{
		moves = move_calc(arr_b);
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
		switch_index(arr_c, len);
	}
}

void	k_sort(int *arr_a, int *arr_b, int *arr_c)
{
	int	len;

	len = arr_c[0];
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
		set_index(arr_a, arr_c);
		pre_sort_b(arr_a, arr_b);
		return_to_sender(arr_a, arr_b, arr_c, len);
	}
	free_all(arr_a, arr_b, arr_c, 0);
}
