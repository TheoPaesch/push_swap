/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:04:03 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/11 16:42:16 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void    free_all(int *arr_a, int *arr_b, int *arr_c, int flag)
{
	free(arr_a);
	free(arr_b);
    free(arr_c);
    arr_a = NULL;
    arr_b = NULL;
    arr_c = NULL;
    if (flag == 1)
	    ft_error(4);
	exit(EXIT_FAILURE);
}