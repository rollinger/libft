/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 22:06:01 by prolling          #+#    #+#             */
/*   Updated: 2021/05/19 17:14:36 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);

/*
* The strlcat() function appends at most (dstsize-strlen(dst)-1) characters of
* src to dst (dstsize being the size of the string buffer dst). If the string
* pointed to by dst contains a null-terminated string that fits into dstsize
* bytes when strlcat() is called, the string pointed to by dst will be a
* null-terminated string that fits in dstsize bytes (including the terminating
* null character) when it completes, and the initial character of src will
* override the null character at the end of dst. If the string pointed to by
* dst is longer than dstsize bytes when strlcat() is called, the string pointed
* to by dst will not be changed.
* The function returns min{dstsize,strlen(dst)}+ strlen(src)
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
