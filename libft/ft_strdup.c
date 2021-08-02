/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 12:51:40 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/13 16:40:52 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La fonction strdup() renvoie un pointeur sur une nouvelle chaîne de 
caractères qui est dupliquée depuis s. La mémoire occupée par cette nouvelle 
chaîne est obtenue en appelant malloc(), et peut (doit) donc être libérée avec
free().*/
/* La fonction strdup() renvoie un pointeur sur la chaîne dupliquée, ou NULL
s'il n'y avait pas assez de mémoire.  */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*tab;
	int		i;

	i = 0;
	tab = (char *)malloc(sizeof(*tab) * (ft_strlen(s) + 1));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		tab[i] = s[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
