/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssingjar <ssingjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 22:37:10 by sisingja          #+#    #+#             */
/*   Updated: 2024/09/13 01:27:42 by ssingjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*fdt;
	char	*fsc;

	if (!dst && !src)
		return (NULL);

	fdt = (char *) dst;
	fsc = (char *) src;

	while (n > 0)
	{
		*(fdt++) = *(fsc++);
		n--;
	}
	return (dst);
}
