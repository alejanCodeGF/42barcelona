/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegomez <alegomez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:56:49 by alegomez          #+#    #+#             */
/*   Updated: 2023/02/02 19:07:46 by alegomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t  i;
    const char *ptr;
    char *ptrfin;

    i = 0;
    ptr = (const char*)src;
    ptrfin = (char*)dst;
    while (ptr[i] && i < n)
    {
        ptrfin[i] = ptr[i];
        i++;
    }
    return (dst);
}