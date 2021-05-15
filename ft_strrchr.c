/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:20:05 by prolling          #+#    #+#             */
/*   Updated: 2021/05/14 16:41:12 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
	char *current;

	current = 0;
	while (*s != '\0')
	{
		if (*s == c)
			current = ((void *)s);
		++s;
	}
	if (c == '\0')
		return ((void *)s);
	return (current);
}
