/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:10:58 by aingunza          #+#    #+#             */
/*   Updated: 2025/04/16 11:55:46 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int *ft_lstsize(t_list *lst)
{
	int	content;

	content = 0;
	while (lst[content] != NULL)
		content++;
	return (content);
}