/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:26:31 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/18 12:48:08 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	if (argc < 3)
		return (1);
	else
	{
		if (num_check(argc, argv))
			return (1);
		if (!init_arr(argc, argv))
			return (1);
	}
	return (0);
}
