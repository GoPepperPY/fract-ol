/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:52:58 by goda-sil          #+#    #+#             */
/*   Updated: 2023/05/09 22:08:20 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "../libraries/minilibx/mlx.h"
# include "../libraries/minilibx/mlx_int.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <math.h>

/*-----------------------structure-----------------------*/

typedef struct  imaginary{
    double  x;
    double  y;
}               complex_numbers;

typedef struct  structure {
    char    *name;
    void    *pattern;
    void    *address;
    int     bits_per_pixel;
    int     size_line;
    int     endian;
    void    *initializer;
    void    *window;
    int     width;
    int     height;
    complex_numbers coordenates;
    double  zoom;
    double  x;
    double  y;
    double  x_arrow;
    double  y_arrow;
    double  radius;
    int     iterations;
    int     color;
}               fractol;

/*-----------------------main code-----------------------*/
void    painter(fractol *fractal);
void    mandelbrot(fractol *fractal);
void    julia(fractol *fractal);
complex_numbers     add(complex_numbers a, complex_numbers b);
complex_numbers     sqr(complex_numbers a);
complex_numbers	    mappoint(fractol *fractal, double x, double y);
void	ft_zoom(double x, double y, fractol *fractal);
void	ft_dezoom(double x, double y, fractol *fractal);
int	close_game(fractol *fractal);
int	key_hook(int keycode, fractol *fractal);
int	mouse_hook(int key_code, int x, int y, fractol *fractal);
int	my_mlx_pixel_put(fractol *fractal, int x, int y, int color);
void    julia_builder(fractol *fractal);
int	freedom(fractol *fractal);

/*-----------------------functions-----------------------*/
int    string_compare(const char *s1, const char *s2);
int string_length(char *string);

#endif