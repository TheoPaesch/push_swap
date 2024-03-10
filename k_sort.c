/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   k_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 13:27:24 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/10 21:15:59 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pre_sort_b(int *arr_a, int *arr_b, int *arr_c)
{
	int	count;
	int	range;

	count = 0;
	range = ft_sqrd(arr_c[0]) * 1.6;
	while (arr_a[0] >= 1)
	{
		if (arr_a[1] < arr_c[count])
		{
			pb(arr_a, arr_b);
			rb(arr_b);
			count++;
		}
		else if (arr_a[1] < arr_c[count] + range)
		{
			pb(arr_a, arr_b);
			count++;
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
		if (arr_b[moves] == arr_c[1]) /* implimentier, dass, wenn die oberste Zahl von arr_c gepusht wurde, dass die zahlen eins aufgerückt werden und die size decreased*/
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
		moves = move_calc(arr_b, arr_c[0]);
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

void	switch_index(int *arr_c)
{
	int	i;

	i = 1;
	while (i < arr_c[0])
	{
		arr_c[i] = arr_c[i + 1];
		i++;
	}
	arr_c[0]--;
}

void	k_sort(int *arr_a, int *arr_b, int *arr_c)
{

}
