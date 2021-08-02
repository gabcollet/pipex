/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:52:19 by gcollet           #+#    #+#             */
/*   Updated: 2021/05/20 13:45:11 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Libère la mémoire de l’élément passé en argument en utilisant la fonction 
del puis avec free(3). La mémoire de next ne doit pas être free. */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL)
		return ;
	if (lst->content)
	{
		del(lst->content);
		free(lst);
	}
}
