/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 22:47:29 by prolling          #+#    #+#             */
/*   Updated: 2021/05/23 19:57:57 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
* The  bzero() function erases the data in the n bytes of the memory starting
* at the location pointed to by s, by writing zeros (bytes containing '\0')
* to that area. It returns void.
*/
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*m;

	m = s;
	while (n--)
		*(m++) = '\0';
	return ;
}
