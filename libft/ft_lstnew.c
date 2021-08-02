/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 08:21:11 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/20 11:42:33 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Alloue (avec malloc) et renvoie un nouvel élément. La variable content est 
initialisée à l’aide de la valeur du paramètre content. La variable ’next’ est
initialisée à NULL. */
/* Valeur de retour: Le nouvel element */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(*list));
	if (list == NULL)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}
