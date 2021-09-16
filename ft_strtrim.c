/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vishii <vishii@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 13:30:32 by vishii            #+#    #+#             */
/*   Updated: 2021/09/16 12:35:51 by vishii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strtrim_start(char const *s1, char const *set)
{
	int	aux;
	int	start;

	aux = 0;
	start = 0;
	while (set[aux] != '\0')
	{
		if (s1[start] == set[aux])
		{
			start++;
			aux = 0;
		}
		else
			aux++;
	}
	return (start);
}

int	strtrim_end(char const *s1, char const *set)
{
	int	aux;
	int	end;

	aux = 0;
	end = ft_strlen(s1) - 1;
	while (set[aux] != '\0')
	{
		if (s1[end] == set[aux])
		{
			end--;
			aux = 0;
		}
		else
			aux++;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		count;
	char	*strtrim;

	if (!s1 || !set)
		return (NULL);
	start = strtrim_start(s1, set);
	if (s1[start] == '\0')
		return (ft_calloc(1, 1));
	end = strtrim_end(s1, set);
	strtrim = malloc(sizeof(char) * (end - start + 1 + 1));
	count = 0;
	while (count != end + 1 - start)
	{
		strtrim[count] = s1[count + start];
		count++;
	}
	strtrim[count] = '\0';
	return (strtrim);
}
