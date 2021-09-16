/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vishii <vishii@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 12:39:34 by vishii            #+#    #+#             */
/*   Updated: 2021/09/04 15:54:18 by vishii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*string;
	size_t	count;

	if (!s)
		return (ft_strdup(""));
	if (!f)
		return (ft_strdup(s));
	count = 0;
	string = ft_strdup(s);
	while (s[count] != '\0')
	{
		string[count] = f(count, s[count]);
		count++;
	}
	return (string);
}
