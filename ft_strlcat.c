/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vishii <vishii@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 20:21:19 by vishii            #+#    #+#             */
/*   Updated: 2021/09/04 15:39:11 by vishii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	size_dst;
	size_t	size_src;
	size_t	count;

	size_dst = ft_strlen(dst);
	size_src = ft_strlen(src);
	if (dstsize <= size_dst)
		return (dstsize + size_src);
	count = 0;
	while (src[count] != '\0' && count < (dstsize - size_dst - 1))
	{
		dst[size_dst + count] = src[count];
		count++;
	}
	dst[size_dst + count] = '\0';
	return (size_dst + size_src);
}
