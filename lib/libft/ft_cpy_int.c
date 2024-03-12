/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cpy_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:51:01 by tpaesch           #+#    #+#             */
/*   Updated: 2024/03/12 17:07:51 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_intcpy(void *dst, const void *src, size_t n)
{
	int		*doc;
	int		*suc;
	size_t	i;

	if (dst == 0 && !src)
		return (NULL);
	doc = (int *)dst;
	suc = (int *)src;
	i = 0;
	while (n >= i)
	{
		doc[i] = suc[i];
		i++;
	}
	return (doc);
}
