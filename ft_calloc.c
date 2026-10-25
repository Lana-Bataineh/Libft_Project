/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbatai <lalbatai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 17:16:57 by lalbatai          #+#    #+#             */
/*   Updated: 2026/10/08 12:56:24 by lalbatai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t				i;
	unsigned char		*ptr;

	if (n != 0 && SIZE_MAX / n < size)
		return (NULL);
	ptr = (unsigned char *) malloc(n * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < (n * size))
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
