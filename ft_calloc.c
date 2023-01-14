/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aagar <aagar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:57:04 by aagar             #+#    #+#             */
/*   Updated: 2023/01/13 19:30:50 by aagar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h";

void    *calloc(size_t count, size_t size)
{
    void *p;
    p = malloc(size * count);
    if (!p)
    return (NULL);
    ft_bzero(p, count);
    return (p);
}