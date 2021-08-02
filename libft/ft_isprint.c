/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 10:27:30 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/07 10:33:03 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Vérifie s'il s'agit d'un caractère imprimable, y compris l'espace. */
/* Les valeurs renvoyées sont non nulles si le caractère c entre dans la 
catégorie testée, et zéro sinon */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
