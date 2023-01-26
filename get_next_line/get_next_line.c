/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegomez <alegomez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:24:19 by alegomez          #+#    #+#             */
/*   Updated: 2023/01/26 19:30:26 by alegomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

char	*get_next_line(int fd)
{
	static void*	chartxt;
	int	i;

	i = 0;
	/*
	if(!fd)
		return (0);
	*/
	read(fd, chartxt, 100);

	printf("%s", (char*)chartxt);
/*
	while()
	{
		printf("%d", texto);
		texto++;
	}
*/
	return ("ey");
}

int	main(void)
{
	int fd = open("../letra.txt", O_RDWR);
	get_next_line(fd);
}
