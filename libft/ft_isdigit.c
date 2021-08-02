/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:04:28 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/12 10:09:29 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Vérifie si l'on a un chiffre (0 à 9). */
/* Les valeurs renvoyées sont non nulles si le caractère c entre dans la
catégorie testée, et zéro sinon  */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
