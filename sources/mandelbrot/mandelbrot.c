/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:52:31 by goda-sil          #+#    #+#             */
/*   Updated: 2023/05/08 21:39:25 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/fractol.h"

void mandelbrot(struct structure *fractal)
{
    fractal->width = 1920;
    fractal->height = 1080;
    fractal->name = malloc(sizeof(char *) * (string_length("Mandelbrot") + 1));
    fractal->name = "Julia";
    printf("ready!");
}