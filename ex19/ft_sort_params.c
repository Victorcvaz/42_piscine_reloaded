/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:57:20 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/07/14 22:02:59 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void	ft_putchar(char c);

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int argc, char *argv[])
{
	char	*tmp;
	int		bubble;
	int		index;

	bubble = 0;
	while (++bubble < argc && argc > 2)
	{
		index = 0;
		while (++index < argc - 1)
		{
			if (ft_strcmp(argv[index], argv[index + 1]) > 0)
			{
				tmp = argv[index];
				argv[index] = argv[index + 1];
				argv[index + 1] = tmp;
			}
		}
	}
	bubble = 0;
	while (++bubble < argc)
	{
		ft_putstr(argv[bubble]);
		ft_putchar('\n');
	}
}
