/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:51:45 by eboualla          #+#    #+#             */
/*   Updated: 2026/04/22 13:05:23 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
include "libft.h"

	char *
	ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*dest;

	len = ft_strlen(s);
	i = 0;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
