/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 16:06:27 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/29 20:18:25 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(int nb)
{	
	ft_putchar('\\');
	ft_putchar("0123456789abcdef"[nb / 16]);
	ft_putchar("0123456789abcdef"[nb % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	current;

	i = 0;
	while (str[i])
	{
		current = str[i];
		if ((current > 31) && (current < 127))
			ft_putchar(current);
		else
			print_hex(current);
		i++;
	}
}

/* int	main(void)
{
	char	*str;

	str = "Coucou\ntu vas bien?";
	ft_putstr_non_printable(str);
	return (0);
}
 */