/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 10:03:50 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/11 13:52:27 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La fonction memccpy() copie au plus n octets de la zone mémoire src vers 
la zone mémoire dest, s'arrêtant dès qu'elle rencontre le caractère c. */
/* La fonction memccpy() renvoie un pointeur sur le caractère immédiatement 
après c dans la zone dest, ou NULL si c n'a pas été trouvé dans les n premiers 
caractères de src.   */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*str_dest;
	unsigned char	*str_src;

	str_dest = (unsigned char *)dest;
	str_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		str_dest[i] = str_src[i];
		if (str_dest[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
