/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:46:05 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/01 19:05:01 by tpaesch          ###   ########.fr       */
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
	else if (i == 3)
	{
		ft_printf("-----------------------------------------\n");
		ft_printf("something in the argument is not a number\n");
		ft_printf("-----------------------------------------\n");
	}
	else
		ft_error_2(i);
}

void	ft_error_2(int i)
{
	if (i == 4)
	{
		ft_printf("------------------------------\n");
		ft_printf("atoi failed in create_array.c!\n");
		ft_printf("------------------------------\n");
	}
	if (i == 5)
	{
		ft_printf("--------------------------------\n");
		ft_printf("malloc failed in create_array.c!\n");
		ft_printf("--------------------------------\n");
	}
	if (i == 6)
	{
		ft_printf("----------------\n");
		ft_printf("double integers!\n");
		ft_printf("----------------\n");
	}
}
