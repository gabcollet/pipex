/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:51:58 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/13 16:02:24 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Alloue (avec malloc()) et retourne une chaine de caractères issue de la 
chaine ’s’. Cette nouvelle chaine commence à l’index ’start’ et a pour taille 
maximale ’len’ */
/* La nouvelle chaine de caractere. NULL si l’allocation échoue. */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	tab = (char *)malloc(sizeof(*s) * (len + 1));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			tab[j] = s[i];
			j++;
		}
		i++;
	}
	tab[j] = '\0';
	return (tab);
}
