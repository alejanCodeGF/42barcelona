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

#define BUFFER_SIZE 42

char	*get_next_line(int fd)
{
	static char	*buffer[BUFFER_SIZE];
	static int	pos = 0;
	static int	inicio = 0;
	char*		strlinea;

	while (read(fd, &c, 1) > 0)
	{
		pos++;
		if(c == '\n')
			break;
	}
	#Malloc de tamaño pos-i
	#Recorres dando la letra en el str desde inicio hasta pos-1
	#Das en pos '\0'
	return (strlinea);
}

int	main(void)
{
	int fd = open("../texto.txt", O_RDWR);
	while (1)
	{
		a = get_next_line(fd);
		if a == 0
			break;
		printf("%s", a);
	}
}
