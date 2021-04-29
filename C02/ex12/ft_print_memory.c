/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 17:41:54 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/27 10:38:08 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_putchar(char c, int rep)
{
	if (rep > 1)
	{
		rep--;
		ft_putchar(c, rep);
	}
	write(1, &c, 1);
}

void	print_dec_to_hex(unsigned long long dec_addr, int places)
{
	places--;
	if (0 < places)
		print_dec_to_hex((dec_addr / 16), places);
	ft_putchar(("0123456789abcdef"[dec_addr % 16]), 1);
}

void	print_printable_char(char c)
{
	if (c > 31 && c < 127)
		ft_putchar(c, 1);
	else
		ft_putchar('.', 1);
}

void	ft_print_memory_at(char *addr, int remaining_pos)
{
	int					pos;

	pos = 0;
	while (pos < 16)
	{
		if (pos < remaining_pos)
			print_dec_to_hex(addr[pos], 2);
		else
			ft_putchar(' ', 2);
		if (pos % 2 != 0)
			ft_putchar(' ', 1);
		pos++;
	}
	pos = 0;
	while (pos < 16)
	{
		if (pos < remaining_pos)
			print_printable_char(addr[pos]);
		pos++;
	}
	write(1, &"\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned long long	dec_addr;
	unsigned int		mem_pos;
	int					remaining_pos;

	mem_pos = 0;
	if (size < 1)
		return (addr);
	while (mem_pos < size)
	{
		dec_addr = (unsigned long long)(addr + mem_pos);
		print_dec_to_hex(dec_addr, 16);
		ft_putchar(':', 1);
		ft_putchar(' ', 1);
		remaining_pos = size - mem_pos;
		if (remaining_pos > 16)
			remaining_pos = 16;
		ft_print_memory_at((addr + mem_pos), remaining_pos);
		mem_pos += 16;
	}
	write(1, &"\n", 1);
	return (addr);
}
