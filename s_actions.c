/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_actions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:28:41 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/01 14:31:31 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sa(int *arr_a)
{
	int	temp;

	temp = 0;
	if (arr_a[0] > 1)
	{
		temp = arr_a[1];
		arr_a[1] = arr_a[2];
		arr_a[2] = temp;
		ft_printf("sa\n");
		return (0);
	}
	return (1);
}

int	sb(int *arr_b)
{
	int	temp;

	temp = 0;
	if (arr_b[0] > 1)
	{
		temp = arr_b[1];
		arr_b[1] = arr_b[2];
		arr_b[2] = temp;
		ft_printf("sb\n");
		return (0);
	}
	return (1);
}

int	ss(int *arr_a, int *arr_b)
{
	int	temp1;
	int	temp2;

	temp1 = 0;
	temp2 = 0;
	if (arr_b[0] > 1 && arr_a[0] > 1)
	{
		temp1 = arr_a[1];
		temp2 = arr_b[1];
		arr_a[1] = arr_a[2];
		arr_b[1] = arr_b[2];
		arr_a[2] = temp1;
		arr_b[2] = temp2;
		ft_printf("ss\n");
		return (0);
	}
	return (1);
}
