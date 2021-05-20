/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 09:44:26 by prolling          #+#    #+#             */
/*   Updated: 2021/05/20 18:44:45 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
* specified in ’set’ removed from the beginning and the end of the string.
* #1. The string to be trimmed.
* #2. The reference set of characters to trim.
* Returns: The trimmed string. NULL if the allocation fails.
* [m1,m2,ca,cb,m2,cd,ce,m3] => [ca,cb,m2,cd,ce]
* 1. left trim (contains strspn to calculate the length of the set chars)
* 2. right trim
* 3. return the string
* for strspn see man strspn
*/

static size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	len;

	while (ft_strchr(accept, (int)*s) != 0)
	{
		++s;
		++len;
	}
	return (len);
}

static char	*ft_lstrtrim(char *str, const char *set)
{
	size_t	totrim;
	size_t	len;

	totrim = ft_strspn(str, set);
	if (totrim > 0)
	{
		len = ft_strlen(str);
		if (totrim == len)
			str[0] = '\0';
		else
			ft_memmove((void *)str, (void *)(str + totrim), len + 1 - totrim);
	}
	return (str);
}

static char	*ft_rstrtrim(char *str, const char *set)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (i >= 0 && ft_strchr(set, str[i]) != 0)
	{
		str[i] = '\0';
		--i;
	}
	return (str);
}

/*
* return (ft_lstrtrim(ft_rstrtrim((char *)s1, set), set));
ft_lstrtrim((char *)s1, set)
ft_rstrtrim((char *)s1, set)
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	ft_rstrtrim((char *)s1, set);
	return (ft_strdup(ft_lstrtrim((char *)s1, set)));
}
