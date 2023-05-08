/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_compare.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:52:37 by goda-sil          #+#    #+#             */
/*   Updated: 2023/04/28 20:00:40 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/fractol.h"

int    string_compare(const char *s1, const char *s2)
{
    size_t	counter;

	counter = 0;
	while ((s1[counter] || s2[counter]))
	{
		if (s1[counter] != s2[counter])
			return (1);
		counter++;
	}
	return (0);
}