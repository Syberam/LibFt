/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_FT_STRNSTR.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonnefo <sbonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 19:27:34 by sbonnefo          #+#    #+#             */
/*   Updated: 2016/12/06 20:36:05 by sbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	printf("%s \n", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
	printf("%s \n", strnstr(argv[1], argv[2], atoi(argv[3])));
	return (0);
}
