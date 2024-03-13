/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:31:54 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/13 19:42:16 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	init_arr(int argc, char **argv)
{
	int	i;
	int	*a;
	int	*b;
	int	*c;

	a = NULL;
	b = NULL;
	c = NULL;
	i = 1;
	if (ft_malloc((argc * sizeof(int)), (void **)&a))
		return (ft_error(5), 1);
	if (ft_malloc((argc * sizeof(int)), (void **)&b))
		free_all(a, b, c, 3);
	if (ft_malloc((argc * sizeof(int)), (void **)&c))
		free_all(a, b, c, 2);
	a[0] = argc - 1;
	b[0] = 0;
	while (i < argc)
	{
		if (ft_atoi_2(argv[i], &a[i]))
			free_all(a, b, c, 1);
		i++;
	}
	if (check_doubles(a, a[0]))
		return (free_all(a, b, c, 0), 0);
	ft_intcpy(c, a, a[0]);
	k_sort(a, b, c);
	return (0);
}

/* maybe create a function that will take the index (arr_a) and you bubble sort arr_c so you sort the index and not the numbers*/