/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:30:31 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/13 19:13:45 by tpaesch          ###   ########.fr       */
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
		if (argv[i][0] == '-' || argv[i][0] == '+')
			j++;
		if (argv[i][j] == '\0')
			return (1);
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

	j = 1;
	while (j <= len)
	{
		i = 1;
		while (i <= len)
		{
			if (arr_a[i] == arr_a[j] && i != j)
				return (ft_error(6), 1);
			i++;
		}
		j++;
	}
	return (0);
}

int	is_sorted(int *arr_a, int *arr_c)
{
	int	i;

	i = 1;
	while (i <= arr_a[0])
	{
		if (arr_a[i] != arr_c[i])
			return (0);
		i++;
	}
	return (1);
}
