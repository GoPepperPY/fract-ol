/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:26:14 by goda-sil          #+#    #+#             */
/*   Updated: 2023/05/09 22:07:42 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int	freedom(fractol *fractal)
{
	mlx_destroy_image(fractal->initializer, fractal->pattern);
	mlx_destroy_window(fractal->initializer, fractal->window);
	mlx_destroy_display(fractal->initializer);
	free(fractal->initializer);
	exit(0);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        fractol fractal;
        if(string_compare("julia", argv[1]) == 0)
            julia(&fractal);
        if(string_compare("mandelbrot", argv[1]) == 0)
            mandelbrot(&fractal);
        fractal.initializer = mlx_init();
        fractal.window = mlx_new_window(fractal.initializer, fractal.width,
                                        fractal.height, fractal.name);
        fractal.pattern = mlx_new_image(fractal.initializer, fractal.width, fractal.height);
        painter(&fractal);
        mlx_key_hook(fractal.window, key_hook, &fractal);
		mlx_hook(fractal.window, 17, 1L << 17, close_game, &fractal);
        mlx_loop(fractal.initializer);
        free(fractal.name);
    }
}