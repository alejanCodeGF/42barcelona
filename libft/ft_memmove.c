/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegomez <alegomez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:56:46 by alegomez          #+#    #+#             */
/*   Updated: 2023/01/28 14:56:46 by alegomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t  i;
    const char *ptr;
    char *ptrfin;

    ptr = (const char*)src;
    ptrfin = (char*)dst;
    if (dst > src)
    {
        i = len;
        while (i--)
            ptrfin[i] = ptr[i];
    }
    else
		ft_memcpy(dst, src, len);
    return (dst);
}

/*|NO PUEDE SUPERPONER| Si los punteros de dst < src, recorre de atras hacia delante, y si
dst > src, recorre normal (de arriba a abajo se escribe, y el puntero es la dirección del
primer caracter del string), si dst == src, return dst porque ya es src
creo la variable i para que sea local, y que no tenga ningun efecto a futuro en len (len = -1 error)*/