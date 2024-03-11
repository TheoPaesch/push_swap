/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:49:57 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/11 21:21:25 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	index_check(int range, int count, int size)
{
	if (range + count > size)
		return (0);
	return (1);
}
