/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 11:01:32 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/11 12:00:30 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Écrit le caractère ’c’ sur le file descriptor donné. */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
