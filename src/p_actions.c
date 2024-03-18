/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_actions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:20:19 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/18 13:23:42 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	pa(int *arr_a, int *arr_b)
{
	int	i;

	i = 0;
	if (arr_b[0] != 0)
	{
		i = arr_a[0];
		while (i != 0)
		{
			arr_a[i + 1] = arr_a[i];
			i--;
		}
		arr_a[1] = arr_b[1];
		arr_a[0] += 1;
		i = 1;
		while (i < arr_b[0])
		{
			arr_b[i] = arr_b[i + 1];
			i++;
		}
		arr_b[0] -= 1;
		return (write(1, "pa\n", 3), 0);
	}
	return (1);
}

int	pb(int *arr_a, int *arr_b)
{
	int	i;

	i = 0;
	if (arr_a[0] != 0)
	{
		i = arr_b[0];
		while (i != 0)
		{
			arr_b[i + 1] = arr_b[i];
			i--;
		}
		arr_b[1] = arr_a[1];
		arr_b[0] += 1;
		i = 1;
		while (i < arr_a[0])
		{
			arr_a[i] = arr_a[i + 1];
			i++;
		}
		arr_a[0] -= 1;
		return (write(1, "pb\n", 3), 0);
	}
	return (1);
}
