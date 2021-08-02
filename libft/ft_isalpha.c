/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:08:39 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/06 15:45:10 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Vérifie si l'on a un caractère alphabétique. */
/* Les valeurs renvoyées sont non nulles si le caractère c entre dans la
catégorie testée, et zéro sinon */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
