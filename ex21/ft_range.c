/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:54:23 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/07/11 21:14:02 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*nbr_array;
	int	index;

	index = 0;
	if (min >= max)
		return (0);
	nbr_array = (int *) malloc(sizeof(int) * (max - min));
	if (nbr_array == NULL)
		return (NULL);
	while (min < max)
		nbr_array[index++] = min++;
	return (nbr_array);
}

/* #include <stdio.h>
int	main(void)
{
	int	*nbr;
	int	count;

	count = 0;
	nbr = ft_range(2, 8);
	while (nbr)
	{
		printf("%d ", nbr[count]);
		count++;
	}
}
 */
