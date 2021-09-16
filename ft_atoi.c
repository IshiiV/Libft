/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vishii <vishii@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 01:18:10 by vishii            #+#    #+#             */
/*   Updated: 2021/09/04 13:33:33 by vishii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	minus;
	int	total;

	minus = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '+')
		nptr++;
	else
	{
		if (*nptr == '-')
		{
			nptr++;
			minus = -1;
		}
	}
	total = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		total = total * 10;
		total = total + *nptr - '0';
		nptr++;
	}
	return (total * minus);
}
