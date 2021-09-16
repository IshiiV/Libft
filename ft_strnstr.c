/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vishii <vishii@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 16:51:58 by vishii            #+#    #+#             */
/*   Updated: 2021/09/04 15:40:17 by vishii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (little[b] == '\0')
		return ((char *)big);
	while (big[a] != '\0' && len != 0)
	{
		b = 0;
		while (little[b] != '\0' && big[a + b] == little[b] && len != b)
		{
			b++;
			if (little[b] == '\0')
				return ((char *)&big[a]);
		}
		a++;
		len--;
	}
	return (0);
}
