/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vishii <vishii@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 10:39:21 by vishii            #+#    #+#             */
/*   Updated: 2021/09/18 08:52:04 by vishii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*aux;

	aux = malloc(sizeof(t_list));
	if (!aux)
		return (NULL);
	aux->content = content;
	aux->next = NULL;
	return (aux);
}
