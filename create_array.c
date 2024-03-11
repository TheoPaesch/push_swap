/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:31:54 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/11 19:20:23 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	init_arr(int argc, char **argv)
{
	int	i;
	int	*arr_a;
	int	*arr_b;

	i = 1;
	if (ft_malloc(((argc + 1) * sizeof(int)), *arr_a))
		return (ft_error_2(5), 1);
	if (ft_malloc(((argc + 1) * sizeof(int)), *arr_b))
		return (free(arr_a), arr_a = NULL, ft_error_2(5), 1);
	if (ft_malloc(((argc + 1) * sizeof(int)), *arr_b))
		return (free(arr_a), free(arr_b), arr_a = NULL, arr_b = NULL, ft_error_2(5), 1);
	arr_a[0] = argc;
	arr_b[0] = 0;
	while (i < argc - 1)
	{
		if (ft_atoi_2(argv[i], arr_a))
			free_all(arr_a, arr_b, arr_c, 1);
		i++;
	}
	if (check_doubles(arr_a, arr_a[0]))
		return(free_all(arr_a,	arr_b, arr_c, 0), 0);
	ft_memcpy(arr_c, arr_a, arr_a[0]);
	k_sort(arr_a, arr_b, arr_c);
	return (0);
}

