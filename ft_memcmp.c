/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 08:56:01 by prolling          #+#    #+#             */
/*   Updated: 2021/05/18 10:13:30 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
* The memcmp() function compares the first n bytes (each interpreted as
* unsigned char) of the memory areas s1 and s2. The  memcmp() function returns
* an integer less than, equal to, or greater than zero if the first n bytes of
* s1 is found, respectively, to be less than, to match, or be greater than the
* first n bytes of s2.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*c1;
	const unsigned char	*c2;

	c1 = s1;
	c2 = s2;
	while (n)
	{
		if (*c1 < *c2)
			return (-1);
		else if (*c1 > *c2)
			return (1);
		if (!*c1 || !*c2)
			break ;
		c1++;
		c2++;
		n--;
	}
	return (0);
}
