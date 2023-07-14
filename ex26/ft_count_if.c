/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 19:36:19 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/07/14 19:44:14 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	matriz_index;

	count = 0;
	matriz_index = 0;
	while (tab[matriz_index])
	{
		if (f(tab[matriz_index] == 1))
			count++;
		matriz_index++;
	}
	return (count);
}
