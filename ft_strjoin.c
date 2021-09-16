/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vishii <vishii@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:44:24 by vishii            #+#    #+#             */
/*   Updated: 2021/09/04 15:44:25 by vishii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	count_s1;
	size_t	count_s2;

	if (!s1 || !s2)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	count_s1 = 0;
	while (s1[count_s1] != '\0')
	{
		str[count_s1] = s1[count_s1];
		count_s1++;
	}
	count_s2 = 0;
	while (s2[count_s2] != '\0')
	{
		str[count_s1 + count_s2] = s2[count_s2];
		count_s2++;
	}
	str[count_s1 + count_s2] = '\0';
	return (str);
}
