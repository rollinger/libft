/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 22:16:01 by prolling          #+#    #+#             */
/*   Updated: 2021/05/18 22:20:49 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);

/*
* Description
*/
size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	buf_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (size)
	{
		if (src_len >= size)
			buf_len = size - 1;
		else
			buf_len = src_len;
		ft_memcpy(dest, src, buf_len);
		dest[buf_len] = '\0';
	}
	return (src_len);
}
