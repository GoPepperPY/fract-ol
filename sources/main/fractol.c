/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:26:14 by goda-sil          #+#    #+#             */
/*   Updated: 2023/05/08 21:04:23 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/fractol.h"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        struct structure fractal;
        if(string_compare("julia", argv[1]) == 0)
            julia(&fractal);
        if(string_compare("mandelbrot", argv[1]) == 0)
            mandelbrot();
        fractal.initializer = mlx_init();
        fractal.window = mlx_new_window(fractal.initializer, fractal.width,
                                        fractal.height, fractal.name);
        mlx_loop(fractal.initializer);
    }
}