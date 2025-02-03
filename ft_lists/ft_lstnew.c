/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 09:32:56 by aingunza          #+#    #+#             */
/*   Updated: 2025/02/03 12:58:50 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*elem;
	
	elem = malloc(sizeof(t_list));
	if(!elem)
		return(NULL);
	elem->content = content;
	elem->next = NULL;
	return(elem);
}