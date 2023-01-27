/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegomez <alegomez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 22:29:16 by alegomez          #+#    #+#             */
/*   Updated: 2023/01/27 22:29:16 by alegomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int c)
{
    if (!(c >= 32 && c <= 126))
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