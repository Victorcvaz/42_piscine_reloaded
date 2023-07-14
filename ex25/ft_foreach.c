/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 21:57:43 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/07/14 17:33:25 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	matriz_index;

	matriz_index = 0;
	if (tab)
		while (matriz_index < length)
			f(tab[matriz_index++]);
}
