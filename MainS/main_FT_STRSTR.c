/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_FT_STRSTR.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonnefo <sbonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 17:38:42 by sbonnefo          #+#    #+#             */
/*   Updated: 2016/12/06 19:26:27 by sbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	printf("%s \n", ft_strstr(argv[1], argv[2]));
	printf("%s \n", strstr(argv[1], argv[2]));
	return (0);
}
