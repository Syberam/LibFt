/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_FT_STRLCAT.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonnefo <sbonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 18:46:58 by sbonnefo          #+#    #+#             */
/*   Updated: 2016/12/06 15:06:31 by sbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int			main(int argc, char **argv)
{
	char	*dest1;
	char	*dest2;
	size_t	i;
	size_t	size;
	size_t	ldst;
	size_t	lsrc;

	if (argc != 4)
	return (0);
	i = 0;
	size = atoi(argv[3]);
	ldst = ft_strlen(argv[1]);
	lsrc = ft_strlen(argv[2]);
	if(!(dest1 = (char *)malloc(sizeof(char) * (size + ldst + lsrc +  1))))
		return (0);
	if(!(dest2 = (char *)malloc(sizeof(char) * (size + ldst + lsrc + 1))))
		return (0);
	while (argv[1][i] != 0)
	{
		dest1[i] = argv[1][i];
		i++;
	}
	dest1[i] = 0;
	i = 0;
	while (argv[1][i] != 0)
	{
		dest2[i] = argv[1][i];
		i++;
	}
	dest2[i] = 0;
	printf("%zu", ft_strlcat(dest1, argv[2], atoi(argv[3])));
	printf("\n%s      %s", dest1, argv[2]);
	printf("\n");
	printf("%zu", strlcat(dest2, argv[2], atoi(argv[3])));
	printf("\n%s      %s", dest2, argv[2]);
	return(0);
}
