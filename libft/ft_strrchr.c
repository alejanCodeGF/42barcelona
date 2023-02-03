/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegomez <alegomez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:56:34 by alegomez          #+#    #+#             */
/*   Updated: 2023/01/28 14:56:34 by alegomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    char *ptr;
    size_t slen;
    size_t i;

    ptr = (char*)s;
    slen = strlen(s);
    i = 0;
    while (slen--)
    {
        if (s[slen] == c)
        {
            while (++i < slen)
                ptr++;
            return (ptr);
        }
    }
    return (0);
}
