/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:10:38 by prolling          #+#    #+#             */
/*   Updated: 2021/05/21 12:36:12 by prolling         ###   ########.fr       */
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
	size_t	i;
	size_t	n;
	char	**arr;
	char	*scpy;

	i = 0;
	n = 0;
	arr = (char **)malloc(sizeof(char *) * (ft_countc(s, c) + 2));
	scpy = ft_strdup((const char *)s);
	arr[n] = (char *)scpy;
	while (scpy[i] != 0)
	{
		if (scpy[i] == c)
		{
			scpy[i] = '\0';
			arr[++n] = scpy + i + 1;
		}
		++i;
	}
	arr[++n] = 0;
	return (arr);
}
