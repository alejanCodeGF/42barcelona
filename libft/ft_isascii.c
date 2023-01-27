/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegomez <alegomez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 22:27:03 by alegomez          #+#    #+#             */
/*   Updated: 2023/01/27 22:27:03 by alegomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int c)
{
    if (!(c >= 0 && c <= 127))
        return (0);
    return(1);
}

/*
#include <stdio.h>
int main(void)
{
    printf("%d", ft_isalpha('F'));
    printf("%d", ft_isalpha('7'));
}
*/