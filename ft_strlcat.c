/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 22:06:01 by prolling          #+#    #+#             */
/*   Updated: 2021/05/18 22:13:23 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);

/*
* strlcat not found - strcat instead
*
*/
size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len >= size)
		return (0);
	dest += dest_len;
	size -= dest_len;
	if (src_len >= size)
		src_len = size - 1;
	ft_memcpy(dest, src, src_len);
	dest[size] = '\0';
	return (dest_len + src_len);
}
