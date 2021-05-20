/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 09:44:26 by prolling          #+#    #+#             */
/*   Updated: 2021/05/20 11:01:25 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*malloc(size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
void	*ft_memchr(const void *s, int c, size_t n);

/*
* Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
* specified in ’set’ removed from the beginning and the end of the string.
* #1. The string to be trimmed.
* #2. The reference set of characters to trim.
* Returns: The trimmed string. NULL if the allocation fails.
* [m1,m2,ca,cb,m2,cd,ce,m3] => [ca,cb,m2,cd,ce]
* 1. temp cpy
* 2. write 0 at the beginning matches (until first non match occurred)
* 3. same as 2. just from the end.
* 4. write non null characters to result and finsih off with null at the end.
* 5. free cpy and return result
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cpy;
	char	*res;
	size_t	slen;
	size_t	flen;

	flen = ft_strlen(set);
	slen = ft_strlen(s1);
	cpy = ft_strdup(s1);
	res = malloc(sizeof(char) * (slen + 1));
	while (ft_memchr(set, *cpy, flen) != 0)
		*(cpy++) = '\0';
	cpy = (char *) s1 + slen;
	while (ft_memchr(set, *cpy, flen) != 0)
		*(cpy--) = '\0';
	cpy = (char *) s1;
	while (slen--)
	{
		if (*cpy != '\0')
			*res = *cpy;
		++res;
		++cpy;
	}
	*(++res) = '\0';
	free(cpy);
	return (res);
}
