/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <sisingja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 22:53:08 by sisingja          #+#    #+#             */
/*   Updated: 2024/08/29 01:09:48 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*fdt;
	unsigned char	*fsc;
	unsigned int	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	fdt = (char *) dst;
	fsc = (char *) src;
	if (fdt > fsc)
	{
		while (len-- > 0)
			fdt[len] = fsc[len];
	}
	else
	{
		while (i++ < len)
			fdt[i] = fsc[i];
	}
	return (dst);
}
