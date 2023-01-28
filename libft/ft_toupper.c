/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegomez <alegomez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:52:35 by alegomez          #+#    #+#             */
/*   Updated: 2023/01/28 14:52:35 by alegomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int c)
{
    if ((c >= 97 && c <= 122))
        c -= ('a' - 'A');
    return (c);
}

/*
#include <stdio.h>
int main(void)
{
    printf("%d", ft_toupper('f'));
    printf("%d", ft_toupper('F'));
}
*/