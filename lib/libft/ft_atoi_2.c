/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:47:06 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/13 16:05:00 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_2(const char *str, int *num)
{
	int			i;
	long int	temp;

	i = 0;
	temp = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] <= '9' && str[i] >= '0')
	{
		temp = (temp * 10) + (str[i] - '0');
		i++;
	}
	if (str[i] != '\0')
		return (1);
	if (str[0] == '-')
		temp *= -1;
	if (temp > 2147483647 || temp < -2147483648)
		return (1);
	*num = (int)temp;
	return (0);
}
