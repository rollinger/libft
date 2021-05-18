/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 21:50:59 by prolling          #+#    #+#             */
/*   Updated: 2021/05/18 22:05:04 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/*
* man strstr - but str-n-str not found
* The strstr() function finds the first occurrence of the substring needle in
the string haystack.  The terminating null bytes ('\0') are not compared.
*/
char	*ft_strnstr(char *haystack, char *needle, size_t n)
{
	unsigned int	uint_len_n;
	unsigned int	uint_len_h;

	uint_len_n = ft_strlen(needle);
	if (uint_len_n == 0)
		return (haystack);
	uint_len_h = ft_strlen(haystack);
	while (n && uint_len_h >= uint_len_n)
	{
		uint_len_h--;
		if (ft_strncmp(haystack, needle, uint_len_n) == 0)
			return (haystack);
		haystack++;
		--n;
	}
	return (0);
}
