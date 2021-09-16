/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vishii <vishii@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 18:03:12 by vishii            #+#    #+#             */
/*   Updated: 2021/09/04 16:14:26 by vishii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	aux;

	if (!dest)
		return (NULL);
	aux = 0;
	while (aux < n)
	{
		((char *)dest)[aux] = ((char *)src)[aux];
		aux++;
	}
	return (dest);
}
