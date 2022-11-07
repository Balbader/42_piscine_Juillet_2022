/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:48:07 by baalbade          #+#    #+#             */
/*   Updated: 2022/07/24 14:13:11 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./srcs/ft_h.c"
#include "./srcs/get_nbr_in_dict.c"


#ifndef FT_H
#define FT_H

/* ft_h.c */
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_strlen(char *str);
void	ft_putnbr(int nbr);

/* get_nbr_in_dict.c */
int		ft_get_nbr_position(char *buf, char *to_find);
int		ft_find_word_len(char *buf, int pos);
int		ft_check_char(char c);
char	*ft_get_final_word(char *buf, int pos, int count);
char	*ft_trim_final_word(char *word);

#endif
