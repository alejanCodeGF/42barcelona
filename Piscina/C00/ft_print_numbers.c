/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegomez <alegomez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:08:32 by alegomez          #+#    #+#             */
/*   Updated: 2023/01/26 17:37:04 by alegomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	write(1, "0123456789", 10);
}

/*
void	ft_print_numbers_v2(void)
{
	char	i;

	i = 47;
	while (++i <= 57)
		write(1, &i, 1);
}

int	main(void)
{
	ft_print_numbers_v2();
	return (0);
}
*/
