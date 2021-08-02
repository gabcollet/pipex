/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 11:06:54 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/11 14:23:26 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La fonction strchr() renvoie un pointeur sur la première occurrence du 
caractère c dans la chaîne s. */
/* La fonction strchr() renvoie un pointeur sur le caractère correspondant, 
ou NULL si le caractère n'a pas été trouvé. */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return (str);
}
