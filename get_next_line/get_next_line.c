/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegomez <alegomez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:24:19 by alegomez          #+#    #+#             */
/*   Updated: 2023/02/02 18:40:43 by alegomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

char	*get_next_line(int fd)
{
	char		*buf;
	char		c;
	static int	n_read = -1;
	int			countbuffer;

	if (fd == -1 || BUFFER_SIZE <= 0)
		return (0);
	buf = (char *) malloc(BUFFER_SIZE);
	countbuffer = 0;
	while (n_read != 0)
	{
		n_read = read(fd, &c, 1);
		buf[countbuffer] = c;
		countbuffer++;
		if (c == '\n')
			break ;
	}
	buf[countbuffer] = '\0';
	if (buf[0] == '\0')
		return (0);
	return (buf);
}

/*
int	main(void)
{
	int	fd;

	fd = open("./texto_get_next_line.txt", O_RDWR);
	while (1)
	{
		char	*a = foo(fd);
		if (a == 0)
			break ;
		printf("%s", a);
	}
	close(fd);
	#Malloc de tamaño pos-i
	#Recorres dando la letra en el str desde inicio hasta pos-1
	#Das en pos '\0'
}
*/
