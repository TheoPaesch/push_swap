/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:26:31 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/11 19:09:44 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (argc < 3)
	{
		ft_error(0);
		return (0);
	}
	else
	{
		if (num_check(argc, argv))
			return (0);
		if (!init_arr(argc, argv))
			return (0);
	}
	return (1);
}
