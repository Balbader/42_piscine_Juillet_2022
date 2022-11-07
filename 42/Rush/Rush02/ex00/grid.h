/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdemetz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:54:20 by bdemetz           #+#    #+#             */
/*   Updated: 2022/07/23 20:58:01 by bdemetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __GRID_H__
# define __GRID_H__

int		ft_strlen(char *str);

int		strl_len(char *str);

char	**create_grid(char *str);

void	fill_grid(char **grid, char *str);

char	**build_grid(char *str);

#endif
