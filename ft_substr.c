/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 17:17:44 by prolling          #+#    #+#             */
/*   Updated: 2021/05/19 17:25:59 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*malloc(size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t n);

/*
* Allocates (with malloc(3)) and returns a substring from the string ’s’.
* The substring begins at index ’start’ and is of maximum size ’len’.
* Returns The substring. NULL if the allocation fails.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;

	ss = malloc(sizeof(char) * (len + 1));
	ss = ft_memcpy((void *)ss, (void *)(s + start), len);
	return (ss);
}
