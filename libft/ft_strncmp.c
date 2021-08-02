/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 11:51:46 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/11 13:46:41 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La fonction strcmp() compare les deux chaînes s1 et s2. Elle renvoie un 
entier négatif, nul, ou positif, si s1 est respectivement inférieure, égale 
ou supérieure à s2. */
/* La fonction strncmp() renvoie un entier inférieur, égal ou supérieur à zéro
si s1 (ou ses n premiers octets) est respectivement inférieure, égale ou 
supérieure à s2. */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)s1[i] && (unsigned char)s2[i]
		&& (unsigned char)s1[i] == (unsigned char)s2[i] && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
