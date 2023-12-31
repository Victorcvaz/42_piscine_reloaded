/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:27:58 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/07/14 20:58:58 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	array_index;
	int	matriz_index;

	matriz_index = 1;
	while (matriz_index < argc)
	{
		array_index = 0;
		while (argv[matriz_index][array_index])
			ft_putchar(argv[matriz_index][array_index++]);
		matriz_index++;
		ft_putchar('\n');
	}
}
