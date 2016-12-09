/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonnefo <sbonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 17:39:16 by sbonnefo          #+#    #+#             */
/*   Updated: 2016/12/01 19:01:40 by sbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*cs1;
	char	*cs2;
	size_t	cnt;

	cnt = 0;
	cs1 = (char *)s1;
	cs2 = (char *)s2;
	while (cs1[cnt] == cs2[cnt] && cnt < n)
		cnt++;
	return (cs1[cnt] - cs2[cnt]);
}
