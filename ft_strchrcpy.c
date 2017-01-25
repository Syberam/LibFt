/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonnefo <sbonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 17:17:07 by sbonnefo          #+#    #+#             */
/*   Updated: 2017/01/25 17:53:51 by sbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchrcpy(char *dst, const char *src, int c)
{
	int		i;

	i = 0;
	ft_putendl("debut de boucle");
	while (src[i] != 0 && src[i] != c)
	{
		dst[i] = src[i];
		i++;
	}
	ft_putendl("fin de boucle");
	dst[i] = 0;
	return (dst);
}
