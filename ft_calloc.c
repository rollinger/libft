/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 23:19:19 by prolling          #+#    #+#             */
/*   Updated: 2021/05/19 12:01:21 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*malloc(size_t size);
void	*ft_memset(void *s, int c, size_t n);

/*
* The calloc() function allocates memory for an array of nmemb elements of size
* bytes each and returns a pointer to the allocated memory. The memory is set
* to zero. If nmemb or size is 0, then calloc() returns either NULL, or a
* unique pointer value that can later be successfully passed to free().
* size_t: unsigned int (kind of guaranteed to hold array indexes)
* BUG: if nmemb*size > size_t then should return error.
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	arr = malloc(nmemb * size);
	ft_memset(arr, 0, nmemb * size);
	return (arr);
}
