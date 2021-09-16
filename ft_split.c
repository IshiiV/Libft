/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vishii <vishii@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 18:02:42 by vishii            #+#    #+#             */
/*   Updated: 2021/09/16 11:40:53 by vishii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*char_to_str(const char c)
{
	char	*aux;

	aux = malloc(sizeof(char) * 2);
	aux[0] = c;
	aux[1] = '\0';
	return (aux);
}

char	*init_word(char const *s, char c)
{
	size_t	word_size;

	if (!c)
		return (malloc(sizeof(char *) * (ft_strlen(s) + 1)));
	if (ft_strncmp(s, "", 1) == 0)
	{
		return (malloc(sizeof(char)));
	}
	word_size = 0;
	while (s[word_size] != '\0' && s[word_size] != c)
		word_size++;
	return (malloc(sizeof(char) * (word_size + 1)));
}

char	**init_split(char const *s, char c)
{
	char	*aux;
	size_t	words;

	if (!c)
		return (malloc(sizeof(char *) * 2));
	if (ft_strncmp(s, "", 1) == 0)
	{
		return (malloc(sizeof(char *)));
	}
	aux = ft_strchr(s, c);
	words = 1;
	while (aux != NULL && *(aux + 1) != '\0')
	{
		while ((aux + 1) != NULL && *(aux + 1) == *(aux))
			aux++;
		words++;
		aux++;
		aux = ft_strchr(aux, c);
	}
	return (malloc(sizeof(char *) * (words + 1)));
}

char	**detach_string(char **split, char *str_trim, char c)
{
	size_t	i1;
	size_t	i2;
	size_t	i3;

	i1 = 0;
	i2 = 0;
	i3 = 0;
	while (str_trim[i1] != '\0')
	{
		if (str_trim[i1] != c)
			split[i3][i2++] = str_trim[i1++];
		else
		{
			while (str_trim[i1 + 1] != '\0' && str_trim[i1 + 1] == str_trim[i1])
				i1++;
			split[i3][i2] = '\0';
			i2 = 0;
			i3++;
			split[i3] = init_word(&str_trim[i1++ + 1], c);
		}
	}
	split[i3][i2] = '\0';
	split[i3 + 1] = NULL;
	free(str_trim);
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	*str_trim;
	char	*aux;

	if (!s)
		return (NULL);
	if (ft_strncmp(s, "", 1) == 0)
	{
		split = malloc(sizeof(char *));
		split[0] = NULL;
		return (split);
	}
	aux = char_to_str(c);
	str_trim = ft_strtrim(s, aux);
	free (aux);
	if (ft_strncmp(str_trim, "", 1) == 0)
	{
		split = malloc(sizeof(char *));
		split[0] = NULL;
		free(str_trim);
		return (split);
	}	
	split = init_split(str_trim, c);
	*split = init_word(str_trim, c);
	return (detach_string(split, str_trim, c));
}
