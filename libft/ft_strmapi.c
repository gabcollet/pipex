/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 10:20:19 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/13 13:34:37 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Applique la fonction ’f’ à chaque caractère de la chaine de caractères 
passée en argument pour créer une nouvelle chaine de caractères (avec malloc)
résultant des applications successives de ’f’. */
/* La chaine de caractères résultant des application ssuccessives de f. 
Retourne NULL si l’allocation échoue. */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*tab;

	i = 0;
	if (!s || !f)
		return (NULL);
	tab = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (tab == 0)
		return (NULL);
	while (s[i])
	{
		tab[i] = (*f)(i, s[i]);
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
