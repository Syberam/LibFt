/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonnefo <sbonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 14:07:02 by sbonnefo          #+#    #+#             */
/*   Updated: 2016/11/30 16:02:19 by sbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc != 5)
		return (0);
	printf("%s", argv[1]);
	printf("\n");
	printf("%s", argv[2]);
	printf("\n");
	ft_memset(argv[1], atoi(argv[3]), atoi(argv[4]));
	printf("s apres ft_memset ---> \"%s\"", argv[1]);
	printf("\n");
	memset(argv[2], atoi(argv[3]), atoi(argv[4]));
	printf("s apres memset ---> \"%s\"", argv[2]);
	return (0);
}
