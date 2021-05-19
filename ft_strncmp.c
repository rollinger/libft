/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 17:11:46 by prolling          #+#    #+#             */
/*   Updated: 2021/05/19 14:01:54 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

/*
*
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	return (ft_memcmp((void *)s1, (void *)s2, n));
}
