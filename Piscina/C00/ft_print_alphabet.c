/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegomez <alegomez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:56:14 by alegomez          #+#    #+#             */
/*   Updated: 2023/01/26 17:37:00 by alegomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvxyz", 25);
}

/*
void	ft_print_alphabet_v2(void)
{
	char	i;

	i = 96;
	while (++i <= 122)
		write(1, &i, 1);
}

int	main(void)
{
	ft_print_alphabet_v2();
	return (0);
}
*/
