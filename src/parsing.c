/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:30:31 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/11 19:15:30 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	num_check(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i != argc)
	{
		j = 0;
		if (argv[i][0] == '-')
			i++;
		while (argv[i][j] != '\0')
		{
			if (ft_isnum(argv[i][j]))
				return (ft_error(3), 1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_doubles(int *arr_a, int len)
{
	int	i;
	int	j;

	j = 0;
	while (j < len)
	{
		i = 0;
		while (i < len)
		{
			if (arr_a[i] == arr_a[j])
				return (ft_error(6), 1);
			i++;
		}
		j++;
	}
	return (0);
}
