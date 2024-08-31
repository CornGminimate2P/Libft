/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <sisingja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 00:07:04 by sisingja          #+#    #+#             */
/*   Updated: 2024/08/31 18:41:19 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	s;

	i = 0;
	s = 0;
	if (needle[0] == 0)
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		while (haystack[i + s] == needle[s] && haystack[i + s] && i + s < len)
		{
			s++;
			if (needle[s] == 0)
				return ((char *) haystack + i);
		}
		i++;
		s = 0;
	}
	return (0);
}
