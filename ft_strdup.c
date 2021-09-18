/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vishii <vishii@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 01:51:56 by vishii            #+#    #+#             */
/*   Updated: 2021/09/18 08:13:48 by vishii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	s_size;

	s_size = ft_strlen(s);
	copy = malloc(s_size + 1);
	if (!copy)
		return (NULL);
	ft_memcpy(copy, s, s_size);
	copy[s_size] = '\0';
	return (copy);
}
