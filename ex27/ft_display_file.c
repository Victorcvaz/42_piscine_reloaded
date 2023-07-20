/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:43:09 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/07/19 23:01:54 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(int fd)
{
	char	buffer;

	while (read(fd, &buffer, 1) != 0)
		write(1, &buffer, 1);
}

int	main(int argc, char *argv[])
{
	int	fd;

	if (argc != 2)
	{
		if (argc == 1)
			write(2, "Too many arguments.\n", 20);
		else
			write(2, "File name missing.\n", 19);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	ft_display_file(fd);
	close(fd);
	return (0);
}
