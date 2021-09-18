/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vishii <vishii@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:55:27 by vishii            #+#    #+#             */
/*   Updated: 2021/09/18 07:29:06 by vishii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	aux;

	aux = 0;
	while (aux < n)
	{
		((char *)s)[aux] = (char)c;
		aux++;
	}
	return (s);
}
