/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 11:17:23 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/13 15:59:39 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Écrit la chaine de caractères ’s’ sur le file descriptor donné. */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}
