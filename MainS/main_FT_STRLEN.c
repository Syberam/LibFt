/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_FT_STRLEN.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonnefo <sbonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 19:29:59 by sbonnefo          #+#    #+#             */
/*   Updated: 2016/12/01 19:40:32 by sbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("\n");
	printf("longueur de la Phrase \033[32m%s\033[0m avec ft_strlen", argv[1]);
	printf("\n");
	printf("retour de ft_memchr : \033[3%zum%zu\033[0m", ft_strlen(argv[1]) % 2 + 1, ft_strlen(argv[1]));
	printf("\n");
	printf("\n");
	printf("longueur de la Phrase \033[32m%s\033[0m avec la strlen", argv[1]);
	printf("\n");
	printf("retour de ft_memchr : \033[3%zum%lu", strlen(argv[1]) % 2 + 1, strlen(argv[1]));
	printf("\n");
	printf("\n");
	return (0);
}
