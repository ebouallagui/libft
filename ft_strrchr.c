/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:27:13 by eboualla          #+#    #+#             */
/*   Updated: 2026/04/28 16:42:51 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*lastc;

	lastc = NULL;
	if (c == 0)
		return (NULL);
	while (*s)
	{
		if ((char)c == *s)
			lastc = (char *)s;
		s++;
	}
	return (lastc);
}
