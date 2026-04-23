/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:27:13 by eboualla          #+#    #+#             */
/*   Updated: 2026/04/23 16:57:32 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if (c == 0)
		return (NULL);
	while (len >= 0)
	{
		if (s[len] == c)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}

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
