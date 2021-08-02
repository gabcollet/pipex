/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 10:37:42 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/11 14:09:50 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La fonction memmove() copie n octets depuis la zone mémoire src vers la zone 
mémoire dest. Les deux zones peuvent se chevaucher : la copie se passe comme 
si les octets de src étaient d'abord copiés dans une zone temporaire qui ne 
chevauche ni src ni dest, et les octets sont ensuite copiés de la zone 
temporaire vers dest.  */
/* La fonction memmove() renvoie un pointeur sur dest. */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			*str_dest;
	char			*str_src;

	str_dest = (char *)dest;
	str_src = (char *)src;
	i = 0;
	if (str_dest > str_src)
	{
		while (n--)
			str_dest[n] = str_src[n];
	}
	else if (str_dest < str_src)
		ft_memcpy(dest, src, n);
	return (dest);
}
