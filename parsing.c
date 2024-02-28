/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:30:31 by tpaesch           #+#    #+#             */
/*   Updated: 2024/02/28 15:18:33 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_all_num(int argc, char **argv)
{
    int i;
    int j;
    
    i = 1;
    while (i != argc)
    {
        j = 0;
        while (argv[i][j] != '\0')
        {
            if(!ft_isnum(argv[i][j]))
                ft_error(3);
            j++;
        }
        i++;
    }
}

