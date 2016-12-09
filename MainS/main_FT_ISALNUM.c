/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_FT_ISALNUM.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonnefo <sbonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 16:07:49 by sbonnefo          #+#    #+#             */
/*   Updated: 2016/12/08 16:08:13 by sbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%d\n", ft_isalnum(atoi(argv[1])));
	printf("%d", isalnum(atoi(argv[1])));
	return (0);
}
