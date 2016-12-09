/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonnefo <sbonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 12:49:29 by sbonnefo          #+#    #+#             */
/*   Updated: 2016/12/01 14:20:53 by sbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*cd;
	const char	*cs;

	cs = src;
	cd = dst;
	while (len > 0)
	{
		*(cd + len - 1) = *(cs + len - 1);
		len--;
	}
	return (dst);
}
