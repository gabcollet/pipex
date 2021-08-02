/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:49:15 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/17 10:15:29 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strlcat() function appends the NUL-terminated string src to the end of 
dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the 
result. */
/* The strlcat() functions return the total length of the string they tried 
to create that means the initial length of dst plus the length of src. */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	m;
	size_t	p;

	m = 0;
	n = ft_strlen(dst);
	p = ft_strlen(src);
	if (size == 0)
		return (p);
	while ((src[m] != '\0') && ((n + m) < (size - 1)))
	{
		dst[n + m] = src[m];
		m++;
	}
	dst[n + m] = '\0';
	if (size > n)
		return (n + p);
	return (size + p);
}
