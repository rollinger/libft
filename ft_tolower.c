/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 10:53:55 by prolling          #+#    #+#             */
/*   Updated: 2021/05/14 11:07:43 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(int c);

#define LOWUPDIFF 32

int	ft_tolower(int c)
{
	if (ft_isupper(c) == 1)
		return (c + LOWUPDIFF);
	return (c);
}
