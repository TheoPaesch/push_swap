/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:04:03 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/13 18:49:24 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_all(int *arr_a, int *arr_b, int *arr_c, int flag)
{
	if (flag == 2 || flag == 3 || flag == 1 || flag == 0)
	{
		if (flag == 1 || flag == 0)
		{
			free(arr_c);
			arr_c = NULL;
		}
		if (flag == 2 || flag == 1 || flag == 0)
		{
			free(arr_b);
			arr_b = NULL;
		}
		free(arr_a);
		arr_a = NULL;
		ft_error(5);
	}
	exit(EXIT_FAILURE);
}

/* have to change so every error is the same and that you have a flag for exit success and exit failiure*/
