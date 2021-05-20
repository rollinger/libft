/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 20:40:50 by prolling          #+#    #+#             */
/*   Updated: 2021/05/20 20:43:16 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* Counts the number of elements in a list. Returns lenght of list
*/

int ft_lstsize(t_list *lst)
{
	size_t	len;

	len = 1;
	while (lst->next != NULL)
	{
		lst = lst->next;
		++len;
	}
	return ;
}
