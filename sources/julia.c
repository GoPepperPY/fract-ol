/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:52:22 by goda-sil          #+#    #+#             */
/*   Updated: 2023/05/09 22:10:05 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void    julia(fractol *fractal)
{
    fractal->width = 1920;
    fractal->height = 1080;
    fractal->zoom = 1;
    fractal->name = malloc(sizeof(char *) * (string_length("Julia") + 1));
    fractal->name = "Julia";
    fractal->iterations = 150;
    fractal->radius = 3;
    fractal->x = 0;
    fractal->y = 0;
    fractal->x_arrow = 0;
    fractal->y_arrow = 0;
    fractal->color = 0xccf1ff;
    fractal->coordenates.x = -0.7;
    fractal->coordenates.y = 0.27015;
}

void    julia_builder(fractol *fractal)
{
    int counter;
    complex_numbers     z0;
    complex_numbers     z1;

    fractal->x = 0;
    while (++fractal->x <= fractal->width)
    {
        fractal->y = 0;
        while (++fractal->y <= fractal->height)
        {
            z0 = mappoint(fractal, fractal->x, fractal->y);
            counter = 1;
            while (counter++ <= fractal->iterations)
            {
                z1 = add(sqr(z0), fractal->coordenates);
                if (z1.x * z1.x + z1.y * z1.y > fractal->radius * fractal->radius)
                {
                    my_mlx_pixel_put(fractal, fractal->x,
                            fractal->y, fractal->color * counter);
                    break ;
                }
                z0 = z1;
            }
        }
    }
}

int	my_mlx_pixel_put(fractol *fractal, int x, int y, int color)
{
	char	*pixel;

	pixel = fractal->address + (y * fractal->size_line + x
			* (fractal->bits_per_pixel / 8));
	*(unsigned int *)pixel = color;
	return (0);
}