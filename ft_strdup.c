/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssingjar <ssingjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 03:02:10 by mc42              #+#    #+#             */
/*   Updated: 2024/09/18 15:29:44 by ssingjar         ###   ########.fr       */
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
