/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:24:13 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/07/11 18:54:45 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		len_index;

	len_index = 0;
	while (src[len_index])
		len_index++;
	str = (char *) malloc(sizeof(char) * len_index + 1);
	len_index = 0;
	if (str == NULL)
		return (NULL);
	while (src[len_index])
	{
		str[len_index] = src[len_index];
		len_index++;
	}
	str[len_index] = '\0';
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%s", ft_strdup("testedup"));
// }
