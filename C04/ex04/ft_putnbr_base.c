/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 12:35:14 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/29 11:58:14 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	check_base_dupl(char *base)
{
	int	i;
	int	n;
	int	check_dupl;

	i = 0;
	while (base[i])
	{
		check_dupl = base[i];
		n = i + 1;
		while (base[n])
		{	
			if (check_dupl == base[n])
				return (0);
			n++;
		}
		i++;
	}
	return (1);
}

int	is_space(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r' || c == ' ');
}

int	check_base(char *base)
{
	int	i;
	int	base_length;

	i = 0;
	while (base[i])
	{
		if (is_space(base[i]) || base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	base_length = i;
	if (base_length < 2)
		return (0);
	if (!check_base_dupl(base))
		return (0);
	return (base_length);
}

void	print_dec_to_base(long int nbr_long, int	base_length, char *base)
{	
	char	c;

	if (nbr_long >= base_length)
		print_dec_to_base((nbr_long / base_length), base_length, base);
	c = base[nbr_long % base_length];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	nbr_long;
	int			base_length;

	base_length = check_base(base);
	if (!base_length)
		return ;
	nbr_long = nbr;
	if (nbr_long < 0)
	{
		nbr_long = -nbr_long;
		write(1, "-", 1);
	}
	print_dec_to_base(nbr_long, base_length, base);
}

int	main(void)
{
	printf("hello base:\n");
	ft_putnbr_base(123456, "helo");
	printf("\n");
	printf("\nNUMEROS MIN Y MAX DE INT EN BASE DECIMAL:\n");
	printf("debe dar -2147483648 y 0123456789:\n");
	ft_putnbr_base(-2147483648, "0123456789");
	printf("\n");
	ft_putnbr_base(2147483647, "0123456789");
	printf("\n");

	printf("\nNUMEROS MIN Y MAX DE INT EN BASE HEXA:\n");
	printf("debe dar -80000000 y 7fffffff:\n");
	ft_putnbr_base(-2147483648, "0123456789abcdef");
	printf("\n");
	ft_putnbr_base(2147483647, "0123456789abcdef");
	printf("\n");

	printf("\nNUMEROS 65536 y -65536 EN BASE HEXA:\n");
	printf("debe dar 10000 y -10000:\n");
	ft_putnbr_base(65536, "0123456789abcdef");
	printf("\n");
	ft_putnbr_base(-65536, "0123456789abcdef");
	printf("\n");

	printf("\n");
	printf("\nNUMEROS MIN Y MAX DE INT EN BINARIO:\n");
	printf("debe dar 10000000000000000000000000000000\n");
	printf("y 1111111111111111111111111111111:\n");
	ft_putnbr_base(-2147483648, "01");
	printf("\n");
	ft_putnbr_base(2147483647, "01");
	printf("\n");

	printf("\n");
	printf("\nPRUEBA CON UN NUMERO MAYOR QUE INT '2147483649' EN BASE DECIMAL:\n");
	printf("debe dar -2147483648 ??????:\n");
	ft_putnbr_base(2147483648, "0123456789");
	
	printf("\n");
	return (0);
}
