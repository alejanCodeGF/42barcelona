/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegomez <alegomez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:56:50 by alegomez          #+#    #+#             */
/*   Updated: 2023/01/28 14:56:50 by alegomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    ft_bzero(void *s, size_t n)
{
    size_t i;
    unsigned char*  ptr;

    i = 0;
    ptr = (unsigned char*)s;
    while (i < n)
    {
        ptr[i] = 0;
        i++;
    }
    return (s);
}

/*lo mismo que memset*/