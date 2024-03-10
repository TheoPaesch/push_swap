/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubbble_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 11:47:25 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/10 11:47:57 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubble_sort(int *arr_c, int n)
{
	int	i;
	int	swapped;
	int	j;
	int	temp;

	i = 0;
	while (i < n - 1)
	{
		swapped = 0;
		j = 0;
		while (j < n - i - 1)
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
