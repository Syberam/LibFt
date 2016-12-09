/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_FT_MEMCMP.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonnefo <sbonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 18:01:13 by sbonnefo          #+#    #+#             */
/*   Updated: 2016/12/01 19:18:37 by sbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	printf("\n");
	printf("compare avec ft_memcmp l'espace memoire de \033[36m%s\033[0m et \033[36m%s\033[0m sur \033[35m%d\033[0m bytes", argv[1], argv[2], atoi(argv[3]));
	printf("\n");
	if (ft_memcmp(argv[1], argv[2], atoi(argv[3])) > 0)
		printf("retour de ft_memcmp : \033[32m%d\033[0m", ft_memcmp(argv[1],
				argv[2], atoi(argv[3])));
	else if (ft_memcmp(argv[1], argv[2], atoi(argv[3])) < 0)
		printf("retour de ft_memcmp : \033[31m%d\033[0m", ft_memcmp(argv[1],
				argv[2], atoi(argv[3])));
	else
		printf("retour de ft_memcmp : \033[33m%d\033[0m", ft_memcmp(argv[1],
				argv[2], atoi(argv[3])));
	printf("\n");
	printf("\n");
	printf("compare avec la memcmp l'espace memoire de \033[36m%s\033[0m et \033[36m%s\033[0m sur \033[35m%d\033[0m bytes",argv[1], argv[2], atoi(argv[3]));
	printf("\n");
	if (memcmp(argv[1], argv[2], atoi(argv[3])) > 0)
		printf("retour de la memcmp : \033[32m%d\033[0m", memcmp(argv[1],
				argv[2], atoi(argv[3])));
	else if (memcmp(argv[1], argv[2], atoi(argv[3])) < 0)
		printf("retour de la memcmp : \033[31m%d\033[0m", memcmp(argv[1],
				argv[2], atoi(argv[3])));
	else
		printf("retour de la memcmp : \033[33m%d\033[0m", memcmp(argv[1],
				argv[2], atoi(argv[3])));
	printf("\n");
	return (0);
}
