/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:04:03 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/12 18:42:06 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_all(int *arr_a, int *arr_b, int *arr_c, int flag)
{
	if (flag == 2 || flag == 3)
	{
		if (flag == 2)
		{
			free(arr_b);
			arr_b = NULL;
		}
		free(arr_a);
		arr_a = NULL;
		ft_error(5);
	}
	if (flag == 1 || flag == 0)
	{
		free(arr_a);
		free(arr_b);
		free(arr_c);
		arr_a = NULL;
		arr_b = NULL;
		arr_c = NULL;
		if (flag == 1)
			ft_error(4);
	}
	exit(EXIT_FAILURE);
}
