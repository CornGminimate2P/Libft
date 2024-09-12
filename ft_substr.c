/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssingjar <ssingjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:17:01 by ssingjar          #+#    #+#             */
/*   Updated: 2024/09/12 19:51:25 by ssingjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	subsize;
	size_t	strlen;
	char	*k;

	i = 0;
	strlen = ft_strlen(s);
	subsize = ft_strlen(s + start);
	if (!s)
		return (NULL);
	if (start <= strlen)
		return (ft_strdup(""));
	if (len > subsize)
		len = subsize;
	k = ((char *)malloc(len + 1 * sizeof(char)));
	if (!k)
		return (NULL);
	
}
