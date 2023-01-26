/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegomez <alegomez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:04:22 by alegomez          #+#    #+#             */
/*   Updated: 2023/01/26 17:37:05 by alegomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	write(1, "zyxvutsrqponmlkjihgfedcba", 25);
}

/*
void	ft_print_reverse_alphabet_v2(void)
{
	char	i;

	i = 123;
	while (--i >= 97)
		write(1, &i, 1);
}

int	main(void)
{
	ft_print_reverse_alphabet_v2();
	return (0);
}
*/
