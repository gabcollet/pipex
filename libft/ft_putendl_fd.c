/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 11:44:55 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/13 16:00:14 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Écrit La chaine de caractères ’s’ sur le file descriptor donné, suivie 
d’un retour à la ligne. */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
	ft_putchar_fd('\n', fd);
}
