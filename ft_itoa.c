/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vishii <vishii@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 20:40:57 by vishii            #+#    #+#             */
/*   Updated: 2021/09/04 13:35:49 by vishii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	numlen(int i)
{
	size_t	size;

	size = 1;
	while (i % 10 != i)
	{
		i = i / 10;
		size++;
	}
	if (i < 0)
		size++;
	return (size);
}

char	*ft_itoa(int n)
{
	char	*number;
	size_t	number_size;

	number_size = numlen(n);
	number = malloc(number_size + 1);
	if (n < 0)
		number[0] = '-';
	number[number_size] = '\0';
	while (number_size != 0)
	{
		number_size--;
		if (n < 0)
			number[number_size] = ((n % 10) * -1) + 48;
		else
			number[number_size] = (n % 10) + 48;
		if (n != n % 10)
			n = n / 10;
		else
			break ;
	}
	return (number);
}
