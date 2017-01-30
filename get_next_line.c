/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonnefo <sbonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 18:25:02 by sbonnefo          #+#    #+#             */
/*   Updated: 2017/01/30 18:12:03 by sbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void		ft_fill_line(char **line, char *buff)
{
	char	*tmp;

	tmp = (char *)ft_memalloc(sizeof(char) * BUFF_SIZE);
	if (*line)
		*line = ft_ext_strjoin_free(*line, ft_strchrcpy(tmp, buff, '\n'), 3);
	else 
		*line = ft_ext_strjoin_free(*line, ft_strchrcpy(tmp, buff, '\n'), 2);
	if (ft_strchr(buff, '\n'))
		buff = ft_strcpy(buff, ft_strchr(buff, '\n') + 1);
	else 
		buff = NULL;
}

int					get_next_line(const int fd, char **line)
{
	static char		*buff;
	int				nbread;
	int				i;

	i = 0;

	nbread = 1;
	if (!line || fd < 0 || BUFF_SIZE < 1 || read(fd, NULL, 0) < 0)
		return (-1);
	*line = NULL;
	if (!buff)
		buff = (char *)ft_memalloc(sizeof(char) * BUFF_SIZE + 1);
	if (ft_strchr(buff, '\n'))
	{
				ft_putstr("ligne 37 : \n");
		if ((nbread = read(fd, buff, BUFF_SIZE)) < 0)
			return (0);
		ft_fill_line(&*line, *&buff);
	}
	else
	{ft_putstr("ligne 43\n");
		while (!*buff || ft_strchr(buff, '\n') == NULL)
		{
			ft_putnbr(i++);
			ft_putstr("\tligne 46\n");
			if (!*buff)
			{
				ft_putstr("\t\tligne 49\n");
				nbread = read(fd, buff, BUFF_SIZE);
				if (!*line && nbread == 0)
				{
					ft_putstr("\t\t\tligne 53\n");
					return (0);
				}
				ft_putstr("\t\tligne 56\n");
				buff[nbread] = 0;
			}
			ft_putstr("\tligne 59\n");
			ft_fill_line(&*line, *&buff);
			ft_putstr("\t\tfill_line\n");
		}
	}
	return (1);
}
