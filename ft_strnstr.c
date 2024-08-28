/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc42 <mc42@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 00:07:04 by sisingja          #+#    #+#             */
/*   Updated: 2024/08/29 02:24:01 by mc42             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_srnstr(const char *haystack, const char *needle, size_t len)
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
