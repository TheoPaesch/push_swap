/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:31:54 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/11 22:32:42 by tpaesch          ###   ########.fr       */
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
	if (ft_malloc(((argc + 1) * sizeof(int)), (void *)a))
		return (ft_error(5), 1);
	if (ft_malloc(((argc + 1) * sizeof(int)), (void *)b))
		return (free(a), a = NULL, ft_error(5), 1);
	if (ft_malloc(((argc + 1) * sizeof(int)), (void *)c))
		return (free(a), free(b), a = NULL, b = NULL, ft_error(5), 1);
	a[0] = argc;
	b[0] = 0;
	while (i < argc - 1)
	{
		if (ft_atoi_2(argv[i], a))
			free_all(a, b, c, 1);
		i++;
	}
	if (check_doubles(a, a[0]))
		return (free_all(a, b, c, 0), 0);
	ft_memcpy(c, a, a[0]);
	k_sort(a, b, c);
	return (0);
}
