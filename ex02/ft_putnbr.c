/* ************************************************************************** */
/*
                */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rado andria   <adresse@ecole.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:11:30 by rado andria       #+#    #+#             */
/*   Updated: 2023/09/29 12:11:30 by rado andria      ###   ########.fr       */
/*
                */
/* ************************************************************************** */
#include "ft_putnbr.h"
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	buffer[20];
	char	index;

	index = 0;
	if ( nb == 0)
	{
		write(1, "0", 1);
	}	
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	else
	{
		while (nb > 0)
		{
			buffer[index++] = '0' + nb % 10;
			nb /= 10;
		}
		while (--index >= 0)
		{
			write(1, &buffer[index], 1);
		}
	}
}
