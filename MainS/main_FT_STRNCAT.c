/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_FT_STRNCAT.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonnefo <sbonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 16:26:49 by sbonnefo          #+#    #+#             */
/*   Updated: 2016/12/04 18:46:26 by sbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char	cacm[ft_strlen(argv[1]) + ft_strlen(argv[2])];
	char	cacr[ft_strlen(argv[1]) + ft_strlen(argv[2])];
	char	*cavm;
	char	*cavr;
	int		i;

	i =0;	
	while (argv[1][i] != 0)
	{
		cacm[i] = cacr[i] = argv[1][i];
		i++;
	}
	cacm[i] = cacr[i] = 0;
	cavm = ft_strdup(argv[2]);
	cavr = ft_strdup(argv[2]);
	if (argc != 4)
		return (0);
	printf("%s", ft_strncat(cacm, cavm, atoi(argv[3])));
	printf("\n");
	printf("%s", strncat(cacr, cavr, atoi(argv[3])));
}
