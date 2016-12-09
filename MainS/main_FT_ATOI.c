/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_FT_ATOI.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonnefo <sbonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 21:07:08 by sbonnefo          #+#    #+#             */
/*   Updated: 2016/12/07 21:36:38 by sbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		ft_natoi(const char *str, size_t n)
{
	int     nb;
	size_t  i;

	nb = 0;
	i = 0;
	while (i < n)
	{
		nb = (10 * nb) + (str[i] - 48);
		i++;
	}
	return (nb);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%d\n", ft_atoi(argv[1]));
	printf("%d %d %d\n", ft_natoi(argv[1] + 1, 9), ft_natoi(argv[1] + 1 + 9, 9), ft_atoi(argv[1] + 19));
	printf("%d", atoi(argv[1]));
	return (0);
}
