/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegomez <alegomez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:56:53 by alegomez          #+#    #+#             */
/*   Updated: 2023/02/02 18:58:23 by alegomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    unsigned char*  ptr;

    i = 0;
    ptr = (unsigned char*)b;
    while (i < len)
    {
        ptr[i] = (unsigned int)c;
        i++;
    }
}

/* hago esto, porque size_t no puede ser negativo (no puedo hacer while (len-- > 0), llegaria a len == -1)
y hago un puntero de tipo unsigned char y lo igualo a b para no hacer 1 a 1 (unsigned char*)b[i] = ...*/
