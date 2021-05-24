/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:37:48 by prolling          #+#    #+#             */
/*   Updated: 2021/05/23 22:21:29 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The memmove() function copies n bytes from memory area src to memory area
* dest. The memory areas may overlap: copying takes place as though the bytes in
* src are first copied into a temporary array that does not overlap src or dest,
* and the bytes are then copied from the temporary array to dest. The memmove()
* function returns a pointer to dest.
*
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*temp;

	temp = ft_calloc(n, sizeof(void));
	ft_memcpy(temp, src, n);
	ft_memcpy(dest, temp, n);
	return (dest);
}
