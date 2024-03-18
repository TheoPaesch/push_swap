/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_actions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 23:13:29 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/18 13:22:21 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	rrb(int *arr_b)
{
	int	i;
	int	temp;

	if (arr_b[0] > 1)
	{
		temp = arr_b[arr_b[0]];
		i = arr_b[0];
		while (i > 1)
		{
			arr_b[i] = arr_b[i - 1];
			i--;
		}
		arr_b[1] = temp;
		write(1, "rrb\n", 4);
		return (0);
	}
	return (1);
}

int	rra(int *arr_a)
{
	int	i;
	int	temp;

	if (arr_a[0] > 1)
	{
		temp = arr_a[arr_a[0]];
		i = arr_a[0];
		while (i > 1)
		{
			arr_a[i] = arr_a[i - 1];
			i--;
		}
		arr_a[1] = temp;
		write(1, "rra\n", 4);
		return (0);
	}
	return (1);
}

int	rrr(int *arr_a, int *arr_b)
{
	int	i;
	int	temp;

	if (arr_a[0] > 1 && arr_b[0] > 1)
	{
		temp = arr_a[arr_a[0]];
		i = arr_a[0];
		while (i > 1)
		{
			arr_a[i] = arr_a[i - 1];
			i--;
		}
		arr_a[arr_a[0]] = temp;
		temp = arr_b[arr_b[0]];
		i = arr_b[0];
		while (i > 1)
		{
			arr_b[i] = arr_b[i - 1];
			i--;
		}
		arr_b[arr_b[0]] = temp;
		write(1, "rrr\n", 4);
		return (0);
	}
	return (1);
}
