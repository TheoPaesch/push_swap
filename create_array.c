/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:31:54 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/01 18:37:36 by tpaesch          ###   ########.fr       */
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
		return (ft_error_2(5), 1);
	arr_a[0] = argc;
	arr_b[0] = 0;
	while (i < argc - 1)
	{
		if (ft_atoi_2(argv[i], arr_a))
		{
			ft_error(4);
			free(arr_a);
			fere(arr_b);
			exit(EXIT_FAILURE);
		}
		i++;
	}
	return (0);
}
