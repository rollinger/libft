/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:10:38 by prolling          #+#    #+#             */
/*   Updated: 2021/05/21 17:24:31 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countc(char const *s, char c)
{
	size_t	n;

	n = 0;
	while (*s != 0)
	{
		if (*s == c)
			++n;
		++s;
	}
	return (n);
}

static char	**ft_build_array(char **arr, char const *s, char c)
{
	size_t	word;
	char	*arr_write;
	char	*scpy;

	scpy = ft_strdup((const char *)s);
	word = 1;
	arr_write = *arr;
	while (*scpy != 0)
	{
		if (*scpy == c)
		{
			*scpy = '\0';
			word = 0;
		}
		else if (*scpy != c && word == 0)
		{
			arr_write = scpy;
			++arr_write;
			word = 1;
		}
		++scpy;
	}
	return (arr);
}

/*
* Allocates (with malloc(3)) and returns an array of strings obtained by
* splitting ’s’ using the character ’c’ as a delimiter. The array must be
* ended by a NULL pointer. Returns The array of new strings resulting from the
* split. NULL if the allocation fails.
* Allowed functions: malloc, free
* arr = [start,t1,t2,...,0]
*/
char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	tok_n;

	if (*s == 0)
	{
		arr = (char **)malloc(sizeof(char *));
		*arr = NULL;
		return (arr);
	}
	tok_n = ft_countc(s, c);
	arr = (char **)malloc(sizeof(*arr) * (tok_n + 1));
	if (!arr)
		return (NULL);
	arr = ft_build_array(arr, s, c);
	return (arr);
}
