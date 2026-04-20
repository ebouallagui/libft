/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 14:50:08 by eboualla          #+#    #+#             */
/*   Updated: 2026/04/20 18:59:35 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == ' ' || c == '\r'
		|| c == '\f')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	sign = 1;
	i = 0;
	res = 0;
	while (isspace(str[i++]))
		;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i++]))
		res = res * 10 - (str[i] - '0');
	return (res * sign);
}
