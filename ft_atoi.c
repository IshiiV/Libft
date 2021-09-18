/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vishii <vishii@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 01:18:10 by vishii            #+#    #+#             */
/*   Updated: 2021/09/18 08:52:37 by vishii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_error(int minus)
{
	if (minus == -1)
		return (0);
	else
		return (-1);
}

int	ft_atoi(const char *nptr)
{
	int	minus;
	int	total;
	int	verify;

	minus = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			minus = -1;
		nptr++;
	}
	total = 0;
	verify = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		if (verify++ == 20)
			return (ft_error(minus));
		total = total * 10;
		total = total + *nptr - '0';
		nptr++;
	}
	return (total * minus);
}
