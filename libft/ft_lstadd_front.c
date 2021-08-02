/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 09:29:13 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/20 10:49:20 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Ajoute l’élément ’new’ au début de la liste. */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}
