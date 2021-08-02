/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 15:00:08 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/08 12:41:53 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La fonction bzero() met à 0 (octets contenant « \0 ») les n premiers octets
du bloc pointé par s. */
/* VALEUR RENVOYÉE : Aucune. */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n)
	{
		*str = 0;
		str++;
		n--;
	}
}
