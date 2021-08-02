/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:10:13 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/20 11:48:50 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Ajoute l’élément new à la fin de la liste. */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*temp;

	if (*alst == NULL)
		*alst = new;
	else
	{
		temp = ft_lstlast(*(alst));
		temp->next = new;
	}
}
