/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:43:59 by goda-sil          #+#    #+#             */
/*   Updated: 2023/05/08 20:45:29 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/fractol.h"

int string_length(char *string)
{
    int counter;
    
    counter = 0;
    while (string[counter])
        counter++;
    return (counter);
}