/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbatai <lalbatai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 16:35:38 by lalbatai          #+#    #+#             */
/*   Updated: 2026/10/06 14:04:03 by lalbatai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*updated_value;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_list = NULL;
	new_node = NULL;
	while (lst != NULL)
	{
		updated_value = f(lst->content);
		new_node = ft_lstnew(updated_value);
		if (new_node == NULL)
		{
			del(updated_value);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
