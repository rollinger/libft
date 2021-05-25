/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:10:38 by prolling          #+#    #+#             */
/*   Updated: 2021/05/25 07:56:16 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_splitcnt(char const *s, char c)
{
	char	flg;
	size_t	cnt;

	if (!s)
		return (0);
	cnt = 0;
	flg = 1;
	while (*s)
	{
		if (*s == c)
			flg = 1;
		else
		{
			(flg == 1) ? cnt++ : cnt;
			flg = 0;
		}
		s++;
	}
	return (cnt);
}

static void		ft_freeall(char **ret)
{
	int	i;

	i = 0;
	while (ret[i])
	{
		free(ret[i]);
		i++;
	}
	free(ret);
}

static size_t	ft_strnlen(const char *s, size_t max)
{
	size_t	int_len;

	int_len = 0;
	while ((s[int_len] != '\0') || (int_len > max))
		int_len++;
	return (int_len);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*new;
	size_t	s_len;

	s_len = ft_strnlen(s, n);
	new = malloc(sizeof(char) * (s_len + 1));
	if (!new)
		return(NULL);
	ft_strlcpy(new, (char *)s, s_len + 1);
	return (new);
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
	const char		*p;
	size_t			splitcnt;
	char			**ret;
	char			*end;
	size_t			i;

	splitcnt = ft_splitcnt(s, c);
	ret = ft_calloc(splitcnt + 1, sizeof(char *));
	if (!s || !ret)
		return (NULL);
	i = 0;
	p = s;
	while (i < splitcnt)
	{
		if (*s != c)
		{
			if (!(end = ft_strchr(s, c)))
				end = (char *)p + ft_strlen(p);
			if (!(ret[i++] = ft_strndup(s, end - s)))
			{
				ft_freeall(ret);
				return (NULL);
			}
			s = end;
		}
		s++;
	}
	return (ret);
}
