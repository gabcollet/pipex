/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 12:17:37 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/12 15:28:51 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* calloc() alloue la mémoire necessaire pour un tableau de nmemb éléments de
taille size octets, et renvoie un pointeur vers la mémoire allouée. Cette zone 
est remplie avec des zéros. Si nmemb ou size vaut 0, calloc() renvoie soit 
NULL, soit un pointeur unique qui pourra être passé ultérieurement à free() 
avec succès. */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	ptr = malloc (nmemb * size);
	if (ptr)
		ft_bzero(ptr, nmemb * size);
	return (ptr);
}
