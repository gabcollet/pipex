/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 11:49:42 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/12 16:49:27 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La fonction memcmp() compare les n premiers octets des zones mémoire s1 et
s2. Elle renvoie un entier inférieur, égal, ou supérieur à zéro, si s1 est
respectivement inférieure, égale ou supérieur à s2.  */
/* La fonction memcmp() renvoie un entier négatif, nul ou positif si les n
premiers octets de s1 sont respectivement inférieurs, égaux ou supérieurs aux n
premiers octets de s2.   */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*str_s1;
	unsigned char	*str_s2;

	i = 0;
	str_s1 = (unsigned char *)s1;
	str_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (str_s1[i] == str_s2[i] && i < n - 1)
	{
		i++;
	}
	return (str_s1[i] - str_s2[i]);
}
