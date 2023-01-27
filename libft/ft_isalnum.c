/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegomez <alegomez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 22:24:55 by alegomez          #+#    #+#             */
/*   Updated: 2023/01/27 22:24:55 by alegomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c)
{
    if (!(c >= 65 && c <= 90) && (c >= 97 && c <= 122))
        return (0);
    if (!(c >= '0' && c <= '9'))
        return (0);
    return(1);
}

/*
#include <stdio.h>
int main(void)
{
    printf("%d", ft_isalpha('F'));
    printf("%d", ft_isalpha('7'));
    printf("%d", ft_isalpha('+'));
}
*/