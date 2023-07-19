/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:43:09 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/07/19 17:37:59 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	display_error(int option)
{
	if (option == 1)
		write(1, "File name missing.", 19);
	else
		write(1, "Too many arguments.", 19);
}

char	*ft_read_file(char *buffer, char *name)
{
	int	file;
	int	read_byte;

	file = open(name, O_RDONLY);
	read_byte = read(file, buffer, 10000);
	buffer[read_byte] = '\0';
	close(file);
	return (buffer);
}

int	main(int argc, char *argv[])
{
	char	buffer[10000 + 1];
	int		count;

	count = -1;
	if (argc != 2)
		display_error(argc);
	else
	{
		ft_read_file(buffer, argv[1]);
		while (buffer[++count])
			write(1, &buffer[count], 1);
	}
}
