/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huller <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 20:43:05 by huller            #+#    #+#             */
/*   Updated: 2019/05/18 19:16:44 by huller           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;

	if (argc != 2)
		return (0);
	if ((fd = open(argv[1], O_RDONLY)) == -1)
		return (0);
	while (get_next_line(fd, &line))
	{
		ft_putstr(line);
		free((void *)line);
		ft_putchar('\n');
	}
	free((void *)line);
	close(fd);
	return (0);
}
