/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_FT_STRNCPY.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonnefo <sbonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 17:35:28 by sbonnefo          #+#    #+#             */
/*   Updated: 2016/12/02 20:59:18 by sbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int	i;
	int	j;
	int	ld;
	char	*av1dup;
	char	*av2dup;
	char	*av3dup;

	i = 0;
	j = 0;
	ld = ft_strlen(argv[1]);
	if (atoi(argv[3]) > ld)
		ld = atoi(argv[3]);
	av1dup = ft_strdup(argv[1]);
	av2dup = ft_strdup(argv[2]);
	av3dup = ft_strdup(argv[3]);
	if (argc != 4)
		return (0);
	/*if (ft_strlen(argv[2]) > ft_strlen(argv[1]))
	{
		write(2, "\33[41;5mErreur : src superieur aux dest.\33[0m\nav 1 : dest\nav 2 : src\nav 3 len", 73);
		return(0);
	}*/
	printf("ft_strncpy de \033[36m%d %s\033[0m vers \033[36m%s\033[0m", atoi(av3dup), av2dup, argv[1]);
	printf("\n");
	printf("dst apres ft_strncpy ---> \"");
	ft_strncpy(argv[1], av2dup, atoi(av3dup));
	printf("\033[33;1m%s\033[0m\"\n Schema memoire : \033[32m", argv[1]);
	while (i < ld)
	{
		if (argv[1][i] == 0)
			printf("\033[33m\\0 \033[31m");
		else if (argv[1][i] < 33)
			printf("|s|");
		else
			printf(" %c ", argv[1][i]);
		i++;
	}
	printf("\033[0m\n\n");
	printf("la strncpy de \033[36m%d %s\033[0m vers \033[36m%s\033[0m", atoi(av3dup), av2dup, av1dup);
	printf("\n");
	printf("dst apres la strncpy  ---> \"");
	strncpy(av1dup, av2dup, atoi(av3dup));
	printf("\033[33;1m%s\033[0m\"", av1dup);
	printf("\nSchema memoire : \033[32m");
	while (j < ld)
	{
		if (av1dup[j] == 0)
			printf("\033[33m\\0 \033[31m");
		else if(av1dup[j] < 33)
			printf("|s|");
		else
			printf(" %c ", av1dup[j]);
		j++;
	}
	if (ft_strcmp(av1dup, argv[1]) == 0)
		printf("\n\033[30m\033[42m[SUCCES]\033[0m");
	else
		printf("\n\033[30m\033[41m[FAIL]\033[0m");
	printf("\n");
	return (0);
}
