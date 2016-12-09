/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonnefo <sbonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 19:21:16 by sbonnefo          #+#    #+#             */
/*   Updated: 2016/12/08 19:21:44 by sbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s, int fd)
{
	int		i;

	i = 0;
	while (s[i] != 0)
	{
		ft_putchar_fd(s[i], 1);
		i++;
	}
	ft_putchar_fd('\n', 1);
}
