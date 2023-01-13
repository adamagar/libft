/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aagar <aagar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:04:07 by aagar             #+#    #+#             */
/*   Updated: 2023/01/13 18:54:53 by aagar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h";

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}