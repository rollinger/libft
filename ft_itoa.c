/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:17:28 by prolling          #+#    #+#             */
/*   Updated: 2021/05/21 16:07:57 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*malloc(size_t size);

static int	ft_neg(int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

static size_t	ft_countd(int n)
{
	size_t	x;

	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		n /= 10;
		++x;
	}
	return (x);
}

/*
* Allocates (with malloc(3)) and returns a string representing the integer
* received as an argument. Negative numbers must be handled.
* Returns: The string representing the integer. NULL if the allocation fails.
* -123 => ['-','1','2','3']
*
*/
char	*ft_itoa(int n)
{
	size_t	digits;
	char	*d;

	digits = ft_countd(n);
	d = (char *)malloc(sizeof(char) * (digits + 1));
	while (n != 0)
	{
		*d = ((n % 10) + '0');
		n /= 10;
		++d;
	}
	*d = '\0';
	return (d);
}

char	*ft_itoa_old(int n)
{
	size_t	sign;
	size_t	digits;
	char	*d;
	char	*r;

	digits = ft_countd(n);
	sign = ft_neg(n);
	d = malloc(sizeof(char) * digits);
	r = malloc(sizeof(char) * (sign + digits + 1));
	if (n < 0)
	{
		*r = '-';
		n *= -1;
		++r;
	}
	while (n != 0)
	{
		*d = ((n % 10) + '0');
		n /= 10;
		++d;
	}
	while ((digits--) > 0)
		*r++ = *d--;
	*r = '\0';
	return (r);
}
