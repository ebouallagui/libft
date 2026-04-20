/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:05:56 by eboualla          #+#    #+#             */
/*   Updated: 2026/04/20 17:45:03 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char dest, const char *src, size_t size)
{
	size_t	i;
	size_t	destlen;
	size_t	src;

	i = 0;
	destlen = ft_strlen(dest);
	src = ft_strlen(src);
	if (size == 0)
		return (0);
	if (size <= destlen)
		return (size + srclen);
	while (src[i] && destlen + i < (size - 1))
	{
		dest[i + destlen] = src[i];
		i++;
	}
	dest[i + destlen] = '\0';
	return (destlen + srclen);
}
