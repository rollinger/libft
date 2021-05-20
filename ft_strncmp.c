/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 17:11:46 by prolling          #+#    #+#             */
/*   Updated: 2021/05/20 12:33:03 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The  strncmp() function compares the two strings s1 and s2 for only the first
* (at most) n bytes of s1 and s2.
* It returns an integer less than, equal to, or greater than zero if s1 is
* found, respectively, to be less than, to match, or be greater than s2.
* -1 => s1<s2
*  0 => s1=s2
* +1 => s1>s2
* The implementation relies on the ft_memcmp function casting the const char *
* to void pointers.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	return (ft_memcmp((void *)s1, (void *)s2, n));
}
