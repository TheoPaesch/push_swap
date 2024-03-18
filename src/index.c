/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:49:57 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/18 12:48:03 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	switch_index(int *arr_c, int len)
{
	int	i;

	i = 1;
	while (i < arr_c[0])
	{
		arr_c[i] = arr_c[i + 1];
		i++;
	}
	len = arr_c[0];
	arr_c[0] = len - 1;
	return (len - 1);
}

int	index_check(int range, int count, int size)
{
	if (range + count > size)
		return (0);
	return (1);
}

void	set_index(int *arr_a, int *arr_c)
{
	int	i;
	int	j;

	i = 1;
	while (i <= arr_a[0])
	{
		j = 1;
		while (j <= arr_a[0])
		{
			if (arr_a[i] == arr_c[j])
			{
				arr_a[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (i <= arr_c[0])
	{
		arr_c[i] = i;
		i++;
	}
}
