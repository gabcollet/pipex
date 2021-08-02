/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 11:18:02 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/13 13:17:42 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La fonction memcpy() copie n octets depuis la zone mémoire src vers la zone
mémoire dest. Les deux zones ne doivent pas se chevaucher. Si c'est le cas, 
utilisez plutôt memmove(). */
/* La fonction memcpy() renvoie un pointeur sur dest. */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
