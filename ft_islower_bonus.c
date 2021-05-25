/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 15:18:28 by prolling          #+#    #+#             */
/*   Updated: 2021/05/20 11:56:11 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* Returns 1 if c is a lowercase alphabetical character
*/
int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
