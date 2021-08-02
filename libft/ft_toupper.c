/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 10:50:12 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/07 11:03:34 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* toupper() convertit la lettre c en majuscule si c'est possible. */
/* La valeur renvoyée est celle de la lettre convertie, ou bien c si la à
conversion n'était pas possible. */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
