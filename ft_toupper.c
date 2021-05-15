/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 11:06:37 by prolling          #+#    #+#             */
/*   Updated: 2021/05/14 11:07:39 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(int c);

#define LOWUPDIFF 32

int	ft_toupper(int c)
{
	if (ft_islower(c) == 1)
		return (c - LOWUPDIFF);
	return (c);
}
