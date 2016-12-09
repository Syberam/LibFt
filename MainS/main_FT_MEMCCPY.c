/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_FT_MEMCCPY.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonnefo <sbonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 11:06:51 by sbonnefo          #+#    #+#             */
/*   Updated: 2016/12/01 12:58:40 by sbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc != 6)
		return (0);
	printf("%s --> ft_memccpy de \033[31m%d\033[0m \033[35m%s\033[0m sauf si \"\033[31m%s\033[0m\"", argv[1], atoi(argv[5]), argv[3], argv[4]);
	printf("\n");
	printf("retour de ft_memccpy : %s", ft_memccpy(argv[1], argv[3], atoi(argv[4]), atoi(argv[5])));
	printf("\n");
	printf("dest apres ft_memcpy ---> \"%s\"", argv[1]);
	printf("\n");
	printf("src apres la memccpy  ---> \"%s\"", argv[3]);
	printf("\n");
	printf("\n");
	printf("%s --> la memccpy de \033[31m%d\033[0m \033[35m%s\033[0m sauf si \"\033[31m%s\033[0m\"", argv[2], atoi(argv[5]), argv[3], argv[4]);
	printf("\n");
	printf("retour de la memccpy : %s", memccpy(argv[2], argv[3], atoi(argv[4]), atoi(argv[5])));
	printf("\n");
	printf("dest apres la memccpy  ---> \"%s\"", argv[2]);
	printf("\n");
	printf("src apres la memccpy  ---> \"%s\"", argv[3]);
	return (0);
}
