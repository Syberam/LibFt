/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_FT_STRNCMP.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonnefo <sbonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 20:36:52 by sbonnefo          #+#    #+#             */
/*   Updated: 2016/12/06 20:43:36 by sbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	printf("\n");
	printf("compare avec ft_strncmp \"\033[36m%s\033[0m\" et \"\033[36m%s\033[0m\" sur %d caracteres", argv[1], argv[2], atoi(argv[3]));
	printf("\n ft_strncmp retourne :");
	if (ft_strncmp(argv[1], argv[2], atoi(argv[3])) == strncmp(argv[1], argv[2], atoi(argv[3])))
		printf("\033[32m");
	else 
		printf("\033[31m");
	printf("%d\033[0m", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("\n");
	printf("\n");
	printf("compare avec la strncmp \"\033[36m%s\033[0m\" et \"\033[36m%s\033[0m\" sur %d caracteres", argv[1], argv[2], atoi(argv[3]));
	printf("\n");
	printf("La strncmp retourne : \033[33m%d\033[0m", strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("\n");
	return (0);
}
