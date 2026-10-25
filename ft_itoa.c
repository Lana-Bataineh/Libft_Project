/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbatai <lalbatai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 15:06:02 by lalbatai          #+#    #+#             */
/*   Updated: 2026/10/04 15:57:21 by lalbatai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	num_len(long num)
{
	int	count;

	count = 0;
	if (num <= 0)
	{
		count++;
		num *= -1;
	}
	while (num > 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	size_t	len;

	num = n;
	len = num_len(num);
	str = (char *) malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		str[--len] = (num % 10) + '0' ;
		num = num / 10;
	}
	return (str);
}
/*#include <stdio.h>
int main()
{
	int x = -12356;
	printf("the number %d \nthe str is %s\n" ,x ,  ft_itoa(x));
}*/
