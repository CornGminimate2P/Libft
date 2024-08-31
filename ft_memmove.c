/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <sisingja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 22:53:08 by sisingja          #+#    #+#             */
/*   Updated: 2024/08/31 20:21:58 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*fdt;
	const char	*fsc;

	fdt = (char *) dst;
	fsc = (const char *) src;
	if ((!dst && !src) || (len == 0))
		return (dst);
	if (fdt < fsc || (fdt >= fsc + len))
	{
		while ((len--) > 0)
			*fdt++ = *fsc++;
	}
	else
	{
		fdt += len;
		fsc += len;
		while (len--)
			*(--fdt) = *(--fsc);
	}
	return (dst);
}
