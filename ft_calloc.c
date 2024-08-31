/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <sisingja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 02:55:52 by mc42              #+#    #+#             */
/*   Updated: 2024/08/31 21:26:14 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = malloc(count * size);
	if (!s)
		return (NULL);
	while (i < count * size)
		s[i++] = 0;
	return (s);
}