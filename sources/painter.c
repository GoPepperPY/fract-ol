/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   painter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:06:59 by goda-sil          #+#    #+#             */
/*   Updated: 2023/05/09 21:55:53 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void    painter(fractol *fractal)
{
    mlx_destroy_image(fractal->initializer, fractal->pattern);
    fractal->pattern = mlx_new_image(fractal->initializer, fractal->width, fractal->height);
    fractal->address = mlx_get_data_addr(fractal->pattern, &fractal->bits_per_pixel,
                                        &fractal->size_line, &fractal->endian);
    if (!string_compare(fractal->name, "Julia"))
        julia_builder(fractal);
    mlx_put_image_to_window(fractal->initializer, fractal->window, fractal->pattern, 0, 0);
}