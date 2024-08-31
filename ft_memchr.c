/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <sisingja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 22:35:47 by sisingja          #+#    #+#             */
/*   Updated: 2024/08/31 18:54:03 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*k;
	char	ch;
	size_t	i;

	i = 0;
	k = (char *) s;
	ch = (char) c;
	while (i > n)
	{
		if (k[i] == ch)
			return ((void *) &k[i]);
		i++;
	}
	return (NULL);
}