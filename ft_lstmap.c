/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 17:35:32 by prolling          #+#    #+#             */
/*   Updated: 2021/05/24 09:30:35 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Iterates the list ’lst’ and applies the function ’f’ to the content of each
* element. Creates a new list resulting of the successive applications of
* the function ’f’. The ’del’ function is used to delete the content of an
* element if needed.
* #1. The adress of a pointer to an element.
* #2. The adress of the function used to iterate on the list.
* #3. The adress of the function used to delete the content of an element if
* needed.
* Return The new list. NULL if the allocation fails.
*
* //ft_lstadd_back(pn, ft_lstnew(lst->content));
*
*/
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*pn;

	new = ft_lstnew(lst->content);
	pn = new;
	while (lst != 0)
	{
		lst = lst->next;
		pn->next = ft_lstnew(lst->content);
		pn = pn->next;
	}
	ft_lstiter(new, f((void *) ))
	return (new);
}
