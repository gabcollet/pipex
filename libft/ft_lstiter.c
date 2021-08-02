/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:40:10 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/20 15:04:34 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Itère sur la list lst et applique la fonction f au contenu chaque élément. */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
