/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:30:31 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/01 19:03:34 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	num_check(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 1;
	while (i != argc)
	{
		j = 0;
		if (argv[i][0] == '-')
			i++;
		while (argv[i][j] != '\0')
		{
			if (argv[i][k] == argv[i][j])
				return (ft_error(6), 1);
			if (ft_isnum(argv[i][j]))
				return (ft_error(3), 1);
			j++;
		}
		i++;
		k++;
	}
	return (0);
}
