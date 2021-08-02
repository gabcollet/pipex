/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 11:38:19 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/11 14:49:22 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La fonction strrchr() renvoie un pointeur sur la dernière occurrence du 
caractère c dans la chaîne s. */
/* La fonction strrchr() renvoie un pointeur sur le caractère correspondant, 
ou NULL si le caractère n'a pas été trouvé. */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if (c == '\0')
		return ((char *)s + i);
	while (i--)
	{
		if (s[i] == c)
			return ((char *)(s + i));
	}
	return (0);
}
