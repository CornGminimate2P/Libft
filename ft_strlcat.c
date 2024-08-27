/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 00:31:03 by sisingja          #+#    #+#             */
/*   Updated: 2024/08/28 01:34:42 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dtl;
	size_t	scl;

	dtl = ft_strlen(dst);
	scl = ft_strlen(src);
	if (dtl >= dstsize)
		dtl = dstsize;
	if (dtl == dstsize)
		return (dstisize + scl);
}
