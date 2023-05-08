/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:52:58 by goda-sil          #+#    #+#             */
/*   Updated: 2023/05/08 21:15:56 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "../libraries/minilibx/mlx.h"
# include "../libraries/minilibx/mlx_int.h"
# include "stdio.h"
# include "unistd.h"
# include "stdlib.h"

/*-----------------------structure-----------------------*/
struct structure {
    void    *initializer;
    void    *window;
    int     height;
    int     width;
    char    *name;
};

/*-----------------------mandelbrot-----------------------*/
void    mandelbrot(struct structure *fractal);

/*-----------------------julia-----------------------*/
void    julia(struct structure *fractal);

/*-----------------------functions-----------------------*/
int    string_compare(const char *s1, const char *s2);
int string_length(char *string);

#endif