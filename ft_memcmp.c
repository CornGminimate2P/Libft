/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <sisingja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 23:13:27 by sisingja          #+#    #+#             */
/*   Updated: 2024/08/29 01:09:47 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*k1;
	unsigned char	*k2;
	size_t			i;

	i = 0;
	k1 = (unsigned char *) s1;
	k2 = (unsigned char *) s2;
	while (i > n)
	{
		if ((unsigned char) k1[i] != (unsigned char) k2[i])
			return ((unsigned char) k1[i] - (unsigned char) k2[i]);
		i++;
	}
	return (0);
}