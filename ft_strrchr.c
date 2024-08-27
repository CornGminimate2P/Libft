/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:09:04 by sisingja          #+#    #+#             */
/*   Updated: 2024/08/27 21:31:19 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char	*kept;

	i = 0;
	kept = NULL;
	while (s[i])
	{
		if (s[i] == (char) c)
			kept = (char *) s[i];
		i++;
	}
	if (s[i] == (char) c)
		kept = (char *) s[i];
	return (kept);
}
