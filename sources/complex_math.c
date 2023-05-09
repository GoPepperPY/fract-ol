/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_math.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 20:30:38 by goda-sil          #+#    #+#             */
/*   Updated: 2023/05/09 22:08:33 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

complex_numbers     add(complex_numbers a, complex_numbers b)
{
	complex_numbers	c;

	c.x = a.x + b.x;
	c.y = a.y + b.y;
	return (c);
}

complex_numbers     sqr(complex_numbers a)
{
	complex_numbers	c;

	c.x = a.x * a.x - a.y * a.y;
	c.y = 2 * a.x * a.y;
	return (c);
}

complex_numbers	    mappoint(fractol *fractal, double x, double y)
{
	complex_numbers	c;
	double		l;

	if (fractal->width < fractal->height)
		l = fractal->height * fractal->zoom;
	else
		l = fractal->width * fractal->zoom;
	x += fractal->x_arrow ;
	y += fractal->y_arrow ;
	c.x = 2 * fractal->radius * (x - fractal->width / 2) / l;
	c.y = 2 * fractal->radius * (y - fractal->height / 2) / l;
	return (c);
}