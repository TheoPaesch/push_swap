/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrays.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:19:48 by tpaesch           #+#    #+#             */
/*   Updated: 2024/02/27 16:28:53 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


/*initialistaion of array*/
int	init_array(t_array *arr, unsigned int bytes)
{
	arr->size = 0;
	arr->max_size = 1;
	arr->bytes = bytes;
	if (ft_malloc(bytes, &arr->elements))
		return (1);
	return (0);
}
