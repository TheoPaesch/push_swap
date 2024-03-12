/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:09:03 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/12 18:55:15 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sqrd(int nb)
{
	int	sqr_root;

	if (nb < 0)
		return (0);
	sqr_root = 0;
	while (sqr_root * sqr_root <= nb)
	{
		if (sqr_root * sqr_root <= nb && (sqr_root + 1) * (sqr_root + 1) >= nb)
			return (sqr_root);
		sqr_root++;
	}
	return (0);
}

void	sort_two(int *arr_a, int *arr_b, int *arr_c)
{
	if (arr_a[1] > arr_a[2])
		sa(arr_a);
	free_all(arr_a, arr_b, arr_c, 0);
	exit(EXIT_SUCCESS);
}

void	sort_three(int *arr_a)
{
	if (arr_a[1] > arr_a[2] && arr_a[2] < arr_a[3] && arr_a[3] > arr_a[1])
		sa(arr_a);
	if (arr_a[1] > arr_a[2] && arr_a[2] > arr_a[3] && arr_a[3] < arr_a[1])
	{
		sa(arr_a);
		rra(arr_a);
	}
	if (arr_a[1] > arr_a[2] && arr_a[2] < arr_a[3] && arr_a[3] < arr_a[1])
		ra(arr_a);
	if (arr_a[1] < arr_a[2] && arr_a[2] > arr_a[3] && arr_a[3] > arr_a[1])
	{
		sa(arr_a);
		ra(arr_a);
	}
	if (arr_a[1] < arr_a[2] && arr_a[2] > arr_a[3] && arr_a[3] < arr_a[1])
		rra(arr_a);
}

void	sort_four(int *arr_a, int *arr_b, int *arr_c)
{
	int	i;

	i = 0;
	while (i < arr_a[0] - 3)
	{
		if (arr_a[1] == arr_c[1])
		{
			pb(arr_a, arr_b);
			i++;
		}
		else
			ra(arr_a);
	}
	sort_three(arr_a);
	pa(arr_a, arr_b);
}

void	sort_five(int *arr_a, int *arr_b, int *arr_c)
{
	int	i;

	i = 0;
	while (i < arr_a[0] - 3)
	{
		if (arr_a[1] == arr_c[1] || arr_a[1] == arr_c[2])
		{
			pb(arr_a, arr_b);
			i++;
		}
		else
			ra(arr_a);
	}
	sort_three(arr_a);
	if (arr_b[1] < arr_b[2])
		sb(arr_b);
	pa(arr_a, arr_b);
	pa(arr_a, arr_b);
}
