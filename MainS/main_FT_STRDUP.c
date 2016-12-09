/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_FT_STRDUP.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonnefo <sbonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 11:22:41 by sbonnefo          #+#    #+#             */
/*   Updated: 2016/12/02 15:08:03 by sbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char	*cp_dup;
	char	*cp_dup2;

	if (argc != 2)
		return (0);
	cp_dup = ft_strdup(argv[1]);
	cp_dup2 = cp_dup;
	printf("\n");
	printf("Phrase d'origine : \033[36m%s\033[0m, adresse : %p", argv[1], &argv[1]);
	printf("\n");
	printf("copie avec ft_strdup : ");
		if (ft_strcmp(ft_strdup(argv[1]), strdup(argv[1])) == 0)
			printf("\033[32m");
		else
			printf("\033[31m");
	printf("%s\033[0m, adresse : %p ou %p", cp_dup, &cp_dup, &cp_dup2);
	printf("\n");
	printf("\n");
	printf("Phrase d'origine : \033[36m%s\033[0m", argv[1]);
	printf("\n");
	printf("copie avec la strdup : ");
		if (ft_strcmp(ft_strdup(argv[1]), strdup(argv[1])) == 0)
			printf("\033[32m");
		else
			printf("\033[33m");
	printf("%s\033[0m", strdup(argv[1]));
	printf("\n");
	printf("\n");
	return (0);
}
