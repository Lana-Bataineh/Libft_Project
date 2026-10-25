/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbatai <lalbatai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 13:10:37 by lalbatai          #+#    #+#             */
/*   Updated: 2026/10/08 14:21:30 by lalbatai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*word_filling(char const *s, size_t start, size_t end)
{
	char	*word;
	size_t	i;

	if (start >= end)
		return (NULL);
	word = (char *) malloc ((end - start + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_all(char **r, size_t len)
{
	size_t	i;

	i = 0 ;
	while (i < len)
	{
		free(r[i]);
		i++;
	}
	free(r);
}

static size_t	words_arr(char **result, char const *s, char c)
{
	size_t	start;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start < i)
		{
			result[j] = word_filling(s, start, i);
			if (result[j] == NULL)
				return (free_all(result, j), 0);
			j++;
		}
	}
	result[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char		**result;

	if (s == NULL)
		return (NULL);
	result = (char **) malloc((count_words(s, c) + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	if (words_arr(result, s, c) == 0)
		return (NULL);
	return (result);
}
/*#include <stdio.h>
int main()
{
	char *str ;
	str = "xxxhelloxworldxxcodexxxxlanaxxx";


	printf("my string :%s\n" ,str);
	printf("my char set:%c\n" , 'x');

	char **res;
	res = ft_split(str,'x');
	  printf("\n" );

	int i = 0;

	while(res[i])
	{
		printf("result[%d] = %s\n" ,i ,res[i]);
		i++;
	}
}*/
