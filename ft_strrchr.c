/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssingjar <ssingjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:09:04 by sisingja          #+#    #+#             */
/*   Updated: 2024/09/18 15:27:54 by ssingjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*kept;

	i = 0;
	kept = NULL;
	while (s[i])
	{
		if (s[i] == (char) c)
			kept = (char *) &s[i];
		i++;
	}
	if (s[i] == (char) c)
		kept = (char *) &s[i];
	return (kept);
}
