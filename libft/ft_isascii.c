/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 10:04:18 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/07 10:25:01 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Vérifie si c est un unsigned char sur 7 bits, entrant dans le jeu de 
caractères ASCII. */
/* Les valeurs renvoyées sont non nulles si le caractère c entre dans la 
catégorie testée, et zéro sinon */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
