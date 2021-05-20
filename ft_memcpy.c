/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:48:12 by prolling          #+#    #+#             */
/*   Updated: 2021/05/20 12:48:44 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The  memcpy() function copies n bytes from memory area src to memory area
* dest. The memory areas must not overlap.  Use memmove(3) if the memory areas
* do overlap. The memcpy() function returns a pointer to dest.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*m;

	m = dest;
	while (n)
	{
		*m = *(unsigned char *)src;
		++m;
		++src;
		--n;
	}
	return (dest);
}
