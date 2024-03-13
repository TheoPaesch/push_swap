/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 11:47:25 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/13 16:39:47 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubble_sort(int *arr_c, int size)
{
	int	i;
	int	swapped;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		swapped = 0;
		j = 1;
		while (j <= size - i - 1)
		{
			if (arr_c[j] > arr_c[j + 1])
			{
				temp = arr_c[j];
				arr_c[j] = arr_c[j + 1];
				arr_c[j + 1] = temp;
				swapped = 1;
			}
			j++;
		}
		if (swapped == 0)
			break ;
		i++;
	}
}
