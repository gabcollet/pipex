/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 11:23:30 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/11 13:18:41 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La fonction memchr() examine les n premiers octets de la zone mémoire 
pointée par s à la recherche du caractère c. Le premier octet correspondant à c 
(interprété comme un unsigned char) arrête l'opération. */
/* La fonction memchr() renvoie un pointeur sur l'octet correspondant, ou NULL 
si le caractère n'est pas présent dans la zone de mémoire concernée.   */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str_s;

	str_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str_s[i] == (unsigned char)c)
			return (str_s + i);
		i++;
	}
	return (NULL);
}
