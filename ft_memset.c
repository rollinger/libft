/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:33:01 by prolling          #+#    #+#             */
/*   Updated: 2021/05/18 11:38:36 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
* The memset() function fills the first n bytes of the memory area pointed to
* by s with the constant byte c.
*/
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*m;

	m = s;
	while (n)
	{
		*m = (unsigned char) c;
		m++;
		n--;
	}
	return (s);
}
