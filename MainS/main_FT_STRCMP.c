/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_FT_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonnefo <sbonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 18:01:13 by sbonnefo          #+#    #+#             */
/*   Updated: 2016/12/02 14:17:17 by sbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	printf("\n");
	printf("compare avec ft_strcmp \"\033[36m%s\033[0m\" et \"\033[36m%s\033[0m\"", argv[1], argv[2]);
	printf("\n ft_strcmp retourne :");
	if (ft_strcmp(argv[1], argv[2]) == strcmp(argv[1], argv[2]))
		printf("\033[32m");
	else 
		printf("\033[31m");
	printf("%d\033[0m", ft_strcmp(argv[1], argv[2]));
	printf("\n");
	printf("\n");
	printf("compare avec la strcmp \"\033[36m%s\033[0m\" et \"\033[36m%s\033[0m\"", argv[1], argv[2]);
	printf("\n");
	printf("La strcmp retourne : \033[35m%d\033[0m", strcmp(argv[1], argv[2]));
	printf("\n");
	return (0);
}
