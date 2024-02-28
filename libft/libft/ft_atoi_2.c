/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:47:06 by tpaesch           #+#    #+#             */
/*   Updated: 2024/02/28 13:01:50 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str, int *num)
{
	int		    i;
	long int    temp;
	int		    cnt2;

	cnt2 = 1;
	i = 0;
	temp = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\f' || str[i] == '\n' || str[i] == '\v')
		i++;
	if (str[i] == '-')
		cnt2++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] <= '9' && str[i] >= '0')
	{
		temp = (temp * 10) + (str[i] - '0');
		i++;
	}
	if (cnt2 == 2)
		temp = (temp * (-1));
    if (temp > 2147483647 || temp < -2147483648)
        return (1);
    num = (int *)temp;
	return (0);
}