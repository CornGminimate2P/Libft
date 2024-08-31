/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <sisingja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 03:02:10 by mc42              #+#    #+#             */
/*   Updated: 2024/08/31 18:25:35 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*k;
	size_t	i;

	i = 0;
	k = (char *) malloc(ft_strlen(s1) + 1);
	if (!k)
		return (NULL);
	while (s1[i])
	{
		k[i] = s1[i];
		i++;
	}
	k[i] = 0;
	return (k);
}