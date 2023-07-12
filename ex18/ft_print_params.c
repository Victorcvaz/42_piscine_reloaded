/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:27:58 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/07/11 15:55:54 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	array_index;

	while (--argc > 0)
	{
		array_index = 0;
		while (argv[argc][array_index])
			ft_putchar(argv[argc][array_index++]);
		ft_putchar('\n');
	}
}
