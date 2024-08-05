/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguacide <jguacide@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 08:59:54 by jguacide          #+#    #+#             */
/*   Updated: 2024/01/04 08:59:59 by jguacide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# define OPEN_MAX 1024

char	*ft_free(char **s);
char	*read_from_file(int fd, char *my_static_buffer);
char	*save_line(char *myStaticBuffer);
char	*save_nextline(char *myStaticBuffer);
char	*ft_strdup(char const *s);
char	*ft_strchr(char const *s, int c);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(char const *s);
char	*get_next_line(int fd);

#endif 
