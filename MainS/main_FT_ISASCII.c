/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_FT_ISASCII.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonnefo <sbonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 16:17:09 by sbonnefo          #+#    #+#             */
/*   Updated: 2016/12/08 16:24:52 by sbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%d\n", ft_isascii(atoi(argv[1])));
	printf("%d", isascii(atoi(argv[1])));
	return (0);
}
