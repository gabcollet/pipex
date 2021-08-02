/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 11:01:50 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/07 11:05:35 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* tolower() convertit la lettre c en minuscule si c'est possible. */
/* La valeur renvoyée est celle de la lettre convertie, ou bien c si la 
conversion n'était pas possible. */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
