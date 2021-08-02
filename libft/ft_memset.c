/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 10:19:52 by gcollet           #+#    #+#             */
/*   Updated: 2021/07/28 14:09:52 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La fonction memset() remplit les n premiers octets de la zone mémoire 
pointée par s avec l'octet c. */
/* La fonction memset() renvoie un pointeur sur la zone mémoire s. */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;

	str = s;
	while (n)
	{
		*str = (unsigned char)c;
		str++;
		n--;
	}
	return (s);
}
