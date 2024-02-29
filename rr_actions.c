/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_actions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 23:13:29 by tpaesch           #+#    #+#             */
/*   Updated: 2024/02/29 12:42:48 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int rrb(int **arr_b)
{
    int i;
    int temp;

    if (*arr_b[0] > 1)
    {
        temp = *arr_b[arr_b[0]];
        i = 1;
        while (i < *arr_b[0])
        {
            *arr_b[i] = *arr_b[i + 1];
            i++;
        }
        *arr_b[*arr_b[0]] = temp;
        ft_printf("rrb\n");
        return (0);
    }
    return (1);
}

int rra(int **arr_a)
{
    int i;
    int temp;

    if (*arr_a[0] > 1)
    {
        temp = *arr_a[arr_a[0]];
        i = 1;
        while (i < *arr_a[0])
        {
            *arr_a[i] = *arr_a[i + 1];
            i++;
        }
        *arr_a[*arr_a[0]] = temp;
        ft_printf("rra\n");
        return (0);
    }
    return (1);
}

int rrr(int **arr_a, int arr_b)
{
    int i;
    int temp;

    if (*arr_a[0] > 1 && *arr_b[0] > 1)
    {
        temp = *arr_a[arr_a[0]];
        i = 1;
        while (i < *arr_a[0])
        {
            *arr_a[i] = *arr_a[i + 1];
            i++;
        }
        *arr_a[*arr_a[0]] = temp;
        temp = *arr_b[arr_b[0]];
        i = 1;
        while (i < *arr_b[0])
        {
            *arr_b[i] = *arr_b[i + 1];
            i++;
        }
        *arr_b[*arr_b[0]] = temp;
        ft_printf("rrr\n");
        return (0);
    }
    return (1);
}
