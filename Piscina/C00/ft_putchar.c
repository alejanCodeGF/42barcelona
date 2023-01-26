/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegomez <alegomez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:42:31 by alegomez          #+#    #+#             */
/*   Updated: 2023/01/26 17:37:05 by alegomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
#include <stdio.h>
int	main(void)
{
	char c = 'a';
	putchar(c);
	ft_putchar(c);
	return (0);
}
*/
