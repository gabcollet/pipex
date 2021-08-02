/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:31:38 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/11 14:40:33 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strlcpy() function copies up to size characters from the 
NUL-terminated string src to dst, NUL-terminating the result. */
/* The strlcpy() functions return the total length of the string 
they tried to create. For strlcpy() that means the length of src. */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	if (size > 0)
	{
		while (src[i] && --size)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
