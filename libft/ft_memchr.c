/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegomez <alegomez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:56:26 by alegomez          #+#    #+#             */
/*   Updated: 2023/01/28 14:56:26 by alegomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
    char *ptr;
    size_t  i;

    ptr = (char *)s;
    i = 0;
    while (*ptr != '\0' && i++ < n)
    {
        if (*ptr == c)
            return ((void*)ptr);
        ptr++;
    }
    return (0);
}