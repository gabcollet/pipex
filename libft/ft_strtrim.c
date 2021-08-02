/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 12:46:47 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/13 13:30:05 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Alloue (avec malloc) et retourne une copie de la chaine ’s1’, sans les 
caractères spécifiés dans ’set’ au début et à la fin de la chaine de 
caractères. */
/* La chaine de caractères trimmée. NULL si l’allocation échoue. */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	char		*tab;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
		len--;
	tab = ft_substr((char *)s1, 0, len + 1);
	return (tab);
}
