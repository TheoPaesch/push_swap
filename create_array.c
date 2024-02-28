/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:31:54 by tpaesch           #+#    #+#             */
/*   Updated: 2024/02/28 13:04:04 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int init_arr(int argc, char **argv)
{
    int i;
    int *arr_a;
    int *arr_b;

    i = 1;
    ft_malloc(((argc + 1) * sizeof(int)), *arr_a);
    ft_malloc(((argc + 1) * sizeof(int)), *arr_b);
    arr_a[0] = argc;
    arr_b[0] = 0;
    while (i < argc - 1)
    {
        arr_a[i] = ft_atoi_2(argv[i]);
        i++;
    }
    return (0);
}

