/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarlasc <amarlasc@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 16:37:57 by amarlasc          #+#    #+#             */
/*   Updated: 2026/06/01 18:31:16 by amarlasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_and_stash(int fd, char *stash)
{
	char	buffer[BUFFER_SIZE + 1];
	int		bytes_read;

	bytes_read = 1;
	while (!ft_strchr(stash, '\0') && bytes_read > 0)
	{
		read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
			return (NULL);
		buffer[bytes_read] = '\0';
		stash = ft_strjoin(stash, buffer);
		if (!stash)
			return (NULL);
	}
	return (stash);
}

char	*extract_line(char *stash)
{

}

char	*update_stash(char *stash)
{

}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	stash = read_and_stash(fd, &stash);
	line = extract_line(stash);
	stash = update_stash(stash);
}
