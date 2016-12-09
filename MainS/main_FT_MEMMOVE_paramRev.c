/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_FT_MEMMOVE_paramRev.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonnefo <sbonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 14:36:39 by sbonnefo          #+#    #+#             */
/*   Updated: 2016/12/01 15:01:29 by sbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc != 5)
		return (0);
	printf("%s --> ft_memmove de \033[31m%s\033[0m sur \033[35m%d\033[0m bytes", argv[2], argv[1], atoi(argv[4]));
	printf("\n");
	printf("retour de ft_memmove : %s", ft_memmove(argv[2], argv[1], atoi(argv[4])));
	printf("\n");
	printf("dest apres ft_memmove ---> \"%s\"", argv[2]);
	printf("\n");
	printf("src apres la memmove  ---> \"%s\"", argv[1]);
	printf("\n");
	printf("\n");
	printf("%s --> la memmove de \033[31m%s\033[0m sur \033[35m%d\033[0m bytes", argv[3], argv[1], atoi(argv[4]));
	printf("\n");
	printf("retour de la memmove : %s", memmove(argv[3], argv[1], atoi(argv[4])));
	printf("\n");
	printf("dest apres la memmove  ---> \"%s\"", argv[3]);
	printf("\n");
	printf("src apres la memmove  ---> \"%s\"", argv[1]);
	return (0);
}
