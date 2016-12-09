/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_FT_STRCPY.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonnefo <sbonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 15:28:44 by sbonnefo          #+#    #+#             */
/*   Updated: 2016/12/02 17:56:39 by sbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (ft_strlen(argv[3]) > ft_strlen(argv[1]) || 
			ft_strlen(argv[3]) > ft_strlen(argv[2]))
	{
		write(2, "\33[41;5mErreur : src superieur aux dest.\33[0m\nav 1 : dest pour ft_strcpy\nav 2 : dest pour strcy\nav 3 : src.\n", 107);
		return(0);
	}
	printf("ft_strcpy de \033[36m%s\033[0m vers \033[36m%s\033[0m", argv[3], argv[1]);
	printf("\n");
	printf("dst apres ft_strcpy ---> \"");
	ft_strcpy(argv[1], argv[3]);
	printf("\033[33;1m%s\033[0m\"", argv[1]);
	printf("\n\n");
	printf("la strcpy de \033[36m%s\033[0m vers \033[36m%s\033[0m", argv[3], argv[2]);
	printf("\n");
	printf("dst apres la strcpy  ---> \"");
	strcpy(argv[2], argv[3]);
	printf("\033[33;1m%s\033[0m\"", argv[2]);
	printf("\n");
	if (ft_strcmp(argv[2], argv[1]) == 0)
		printf("\033[30m\033[42m[SUCCES]\033[0m");
	else
		printf("\033[30m\033[41m[FAIL]\033[0m");
	printf("\n");
	return (0);
}
