/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_FT_STRCHR.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonnefo <sbonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 15:24:34 by sbonnefo          #+#    #+#             */
/*   Updated: 2016/12/06 17:38:07 by sbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	printf("%s \n", ft_strrchr(argv[1], atoi(argv[2])));
	printf("%s \n", strrchr(argv[1], atoi(argv[2])));
	return (0);
}
