/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 20:37:40 by goda-sil          #+#    #+#             */
/*   Updated: 2023/05/09 22:17:15 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	ft_zoom(double x, double y, fractol *fractal)
{
	fractal->x = (x / fractal->zoom) - (x / (fractal->zoom * 1.3));
	fractal->y = (y / fractal->zoom) - (y / (fractal->zoom * 1.3));
	fractal->zoom *= 1.3;
	fractal->iterations++;
}

void	ft_dezoom(double x, double y, fractol *fractal)
{
	fractal->x = (x / fractal->zoom) - (x / (fractal->zoom / 1.3));
	fractal->y = (y / fractal->zoom) - (y / (fractal->zoom / 1.3));
	fractal->zoom /= 1.3;
	fractal->iterations--;
}

int	close_game(fractol *fractal)
{
	freedom(fractal);
	exit(EXIT_SUCCESS);
	return (EXIT_SUCCESS);
}

int	key_hook(int keycode, fractol *fractal)
{
	if (keycode == 65307)
		close_game(fractal);
	else if (keycode == 65361)
		fractal->x_arrow -= 0.1;
	else if (keycode == 65364)
		fractal->y_arrow += 0.1;
	else if (keycode == 65363)
		fractal->x_arrow += 0.1;
	else if (keycode == 65636)
		fractal->y_arrow -= 0.1;
	else if (keycode == 65451)
		fractal->color += 100;
	else if (keycode == 65453)
		fractal->color -= 100;
	else if (keycode == 114)
	{
		julia(fractal);
	}
	else if (keycode == 122)
		fractal->zoom = 1;
	if (keycode != 65307)
		painter(fractal);
	return (0);
}

int	mouse_hook(int key_code, int x, int y, fractol *fractal)
{
	if (key_code == 1 && !string_compare(fractal->name, "julia"))
	{
		fractal->coordenates.x = ((double) x / fractal->width * 4 - 2);
		fractal->coordenates.y = ((double) y / fractal->height * 3 - 1.5);
		fractal->zoom = 1;
	}
	else if (key_code == 4)
		ft_zoom(((double) x / fractal->width * 1000 - 500),
			((double) y / fractal->height * 1000 - 500), fractal);
	else if (key_code == 5)
		ft_dezoom(((double) x / fractal->width * 1000 - 500),
			((double) y / fractal->height * 1000 - 500), fractal);
	painter(fractal);
	return (0);
}