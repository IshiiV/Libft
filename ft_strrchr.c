/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vishii <vishii@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 21:51:35 by vishii            #+#    #+#             */
/*   Updated: 2021/09/16 12:30:49 by vishii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*aux;

	if ((unsigned char)c == '\0')
		return ((char *)s + ft_strlen(s));
	aux = NULL;
	while (*s != '\0')
	{
		if ((unsigned char)c == *s)
			aux = (char *)s;
		s++;
	}
	return (aux);
}
