/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 22:47:29 by prolling          #+#    #+#             */
/*   Updated: 2021/05/20 12:50:01 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The  bzero() function erases the data in the n bytes of the memory starting
* at the location pointed to by s, by writing zeros (bytes containing '\0')
* to that area. It returns void.
*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, (unsigned int) '\0', n);
	return ;
}
