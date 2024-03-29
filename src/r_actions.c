/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_actions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:00:19 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/18 13:21:30 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ra(int *arr_a)
{
	int	i;
	int	temp;

	if (arr_a[0] > 1)
	{
		temp = arr_a[1];
		i = 1;
		while (i < arr_a[0])
		{
			arr_a[i] = arr_a[i + 1];
			i++;
		}
		arr_a[arr_a[0]] = temp;
		write(1, "ra\n", 3);
		return (0);
	}
	return (1);
}

int	rb(int *arr_b)
{
	int	i;
	int	temp;

	if (arr_b[0] > 1)
	{
		temp = arr_b[1];
		i = 1;
		while (i < arr_b[0])
		{
			arr_b[i] = arr_b[i + 1];
			i++;
		}
		arr_b[arr_b[0]] = temp;
		write(1, "rb\n", 3);
		return (0);
	}
	return (1);
}
