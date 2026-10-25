/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbatai <lalbatai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 14:34:43 by lalbatai          #+#    #+#             */
/*   Updated: 2026/10/07 16:02:12 by lalbatai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*mynode;

	mynode = (t_list *) malloc(1 * sizeof(t_list));
	if (mynode == NULL)
		return (NULL);
	mynode->content = content;
	mynode->next = NULL;
	return (mynode);
}
