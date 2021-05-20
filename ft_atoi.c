/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 22:25:16 by prolling          #+#    #+#             */
/*   Updated: 2021/05/20 13:36:33 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sign(char c)
{
	if (c == '-')
		return (1);
	else
		return (0);
}

static int	ft_pwr(int nb, int power)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb > 0)
		return (power * ft_pwr(--nb, power));
	return (0);
}

/*
* The atoi() function converts the initial portion of the string pointed to by
* nptr to int. Returns the converted value.
*/
int	ft_atoi(char *str)
{
	int				int_i;
	int				int_sign;
	unsigned int	int_return;

	int_sign = 0;
	while (ft_isspace(*str))
		str++;
	while (*str == '+' || *str == '-')
		int_sign += ft_sign(*str++);
	int_i = 0;
	while (ft_isdigit(*str))
	{
		int_i++;
		str++;
	}
	str -= int_i;
	int_return = 0;
	while (--int_i >= 0)
	{
		int_return += ((unsigned int)*str - '0') * ft_pwr(int_i, 10);
		str++;
	}
	if (int_sign % 2 == 1)
		int_return *= -1;
	return ((int)int_return);
}
