/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_FT_MEMCHR.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonnefo <sbonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 15:57:37 by sbonnefo          #+#    #+#             */
/*   Updated: 2016/12/01 16:53:54 by sbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char asci;

	asci = argv[2][0];
	if (argc != 4)
		return (0);
	printf("\n");
	printf("cherche si \033[32m%c\033[0m est dans  \033[31m%s\033[0m avant \033[35m%d\033[0m bytes", asci, argv[1], atoi(argv[3]));
	printf("\n");
	printf("retour de ft_memchr : %s", ft_memchr(argv[1], asci, atoi(argv[3])));
	printf("\n");
	printf("dest apres ft_memchr ---> \"%s\"", argv[1]);
	printf("\n");
	printf("\n");
	printf("cherche si \033[32m%c\033[0m est dans  \033[31m%s\033[0m avant \033[35m%d\033[0m bytes", asci, argv[1], atoi(argv[3]));
	printf("\n");
	printf("retour de la memchr : %s", memchr(argv[1], asci, atoi(argv[3])));
	printf("\n");
	printf("dest apres la memchr  ---> \"%s\"", argv[1]);
	printf("\n");
	printf("\n");
	return (0);
}
