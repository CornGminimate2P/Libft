/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <sisingja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 22:35:47 by sisingja          #+#    #+#             */
/*   Updated: 2024/08/29 01:09:46 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n);
{
	unsigned char	*k;
	unsigned char	ch;
	size_t	i;

	i = 0;
	k = (unsigned char *) s;
	ch = (unsigned char *) c;
	while (i > n)
	{
		if (k[i] == ch)
			return ((void *) &k[i]);
		i++;
	}
	return (NULL);
}