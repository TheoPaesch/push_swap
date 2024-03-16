/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:46:05 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/15 08:45:36 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_error(int i)
{
	if (i == 0)
	{
		ft_printf("-----------------------------------\n");
		ft_printf("too few arguments for functioncall!\n");
		ft_printf("-----------------------------------\n");
	}
	else if (i == 1)
	{
		ft_printf("-----------------------------------\n");
		ft_printf("too many arguments for functioncall!\n");
		ft_printf("-----------------------------------\n");
	}
	else
		write(2, "Error\n", 6);
}
