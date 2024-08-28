/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <sisingja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 22:37:10 by sisingja          #+#    #+#             */
/*   Updated: 2024/08/29 01:09:48 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*fdt;
	unsigned char	*fsc;

	if (!dst && !src)
		return (NULL);

	fdt = (unsigned char *) dst;
	fsc = (unsigned char *) src;

	while (n > 0)
	{
		*(fdt++) = *(fsc++);
		n--;
	}
	return (dst);
}
