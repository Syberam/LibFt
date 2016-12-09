/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_FT_BZERO.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonnefo <sbonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 16:13:20 by sbonnefo          #+#    #+#             */
/*   Updated: 2016/11/30 16:15:33 by sbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	printf("%s", argv[1]);
	printf("\n");
	printf("%s", argv[2]);
	printf("\n");
	ft_bzero(argv[1], atoi(argv[3]));
	printf("s apres ft_bzero ---> \"%s\"", argv[1]);
	printf("\n");
	bzero(argv[2], atoi(argv[3]));
	printf("s apres la bzero ---> \"%s\"", argv[2]);
	return (0);
}
