/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 22:55:57 by prolling          #+#    #+#             */
/*   Updated: 2021/05/20 10:03:28 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*malloc(size_t size);

/*
* The  strdup() function returns a pointer to a new string which is a duplicate
* of the string s.  Memory for the new string is obtained with malloc(3), and
* can be freed with free(3).
* The strdup() function returns a pointer to a new string which is a duplicate
* of the string s.  Memory for the new string is obtained with malloc(3), and
* can be freed with free(3).
*
*/
char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	s_len;

	s_len = ft_strlen(s);
	new = malloc(sizeof(char) * s_len + 1);
	ft_memcpy(new, s, s_len + 1);
	return (new);
}
