/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 12:27:53 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/29 11:58:28 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

int	resolve_base(char *base, char match)
{
	int		index;

	index = 0;
	while (base[index])
	{
		if (base[index] == match)
			return (index);
		index++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_length;
	int	result;
	int	minus;

	base_length = check_base(base);
	if (!base_length)
		return (0);
	result = 0;
	minus = 1;
	while (is_space(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	while (resolve_base(base, *str) != -1)
	{
		result *= base_length;
		result += resolve_base(base, *str);
		str++;
	}
	return (result * minus);
}

int	main(void)
{
	printf("%d\n", ft_atoi_base("-123456", "0123456789"));
	printf("%d\n", ft_atoi_base("11110001001000000", "01"));
	printf("%d\n", ft_atoi_base("-1e240", "0123456789abcdef"));
}
