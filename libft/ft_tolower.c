/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegomez <alegomez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:57:10 by alegomez          #+#    #+#             */
/*   Updated: 2023/01/28 14:57:10 by alegomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_tolower(int c)
{
    if ((c >= 65 && c <= 90))
        c += ('a' - 'A');
    return (c);
}

/*
#include <stdio.h>
int main(void)
{
    printf("%d", ft_tolower('F'));
    printf("%d", ft_tolower('f'));
}
*/