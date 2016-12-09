/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_FT_BZERO.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonnefo <sbonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 16:13:20 by sbonnefo          #+#    #+#             */
/*   Updated: 2016/12/01 10:14:55 by sbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc != 5)
		return (0);
	printf("%s --> ft_memcpy de %d %s", argv[1], atoi(argv[4]), argv[3]);
	printf("\n");
	ft_memcpy(argv[1], argv[3], atoi(argv[4]));
	printf("s apres ft_memcpy ---> \"%s\"", argv[1]);
	printf("\n");
	printf("\n");
	printf("%s --> la memcpy de %d %s", argv[2], atoi(argv[4]), argv[3]);
	printf("\n");
	memcpy(argv[2], argv[3], atoi(argv[4]));
	printf("s apres la memcpy  ---> \"%s\"", argv[2]);
	return (0);
}
