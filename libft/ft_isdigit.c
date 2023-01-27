/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegomez <alegomez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 22:01:44 by alegomez          #+#    #+#             */
/*   Updated: 2023/01/27 22:01:44 by alegomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c)
{
    if (!(c >= '0' && c <= '9'))
        return (0);
    return(1);
}

/*
#include <stdio.h>
int main(void)
{
    printf("%d", ft_isdigit('7'));
    printf("%d", ft_isdigit('F'));
}
*/