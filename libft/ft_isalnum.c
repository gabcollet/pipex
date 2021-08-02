/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:21:34 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/06 16:42:35 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Vérifie si l'on a un caractère alphanumérique. */
/* Les valeurs renvoyées sont non nulles si le caractère c entre dans la
catégorie testée, et zéro sinon */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}
