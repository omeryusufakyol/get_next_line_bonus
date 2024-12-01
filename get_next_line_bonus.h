/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyol <oakyol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 19:36:35 by oakyol            #+#    #+#             */
/*   Updated: 2024/12/01 19:43:59 by oakyol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

size_t	str_len(char *str);
char	*check_new_line(char *str);
char	*add_str(char *s1, char *s2);
int		count_to_new_line(char *remainder);
char	*get_next_line(int fd);
char	*get_new_remainder(char *remainder);
char	*get_the_line(char *remainder);
char	*get_remainder(int fd, char *remainder);

#endif