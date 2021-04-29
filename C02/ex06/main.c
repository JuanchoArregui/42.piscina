/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:30:31 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/25 10:45:16 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str);

void	populate_Error (char *str)
{
	str[0] = 9;
	str[1] = 4;
	str[2] = 0;
	str[3] = 31;
	str[4] = 127;
	str[5] = 0;
}

void	populate_Ok (char *str)
{
	str[0] = '%';
	str[1] = '@';
	str[2] = '#';
	str[3] = '{';
	str[4] = '6';
	str[5] = '\0';
}

int	main(void)
{
	char	strError[6];
	char	strOk[6];

	populate_Error(strError);
	populate_Ok(strOk);
	if (ft_str_is_printable(strError) == 0)
		printf("OK\n");
	else
		printf("KO\n");
	if (ft_str_is_printable(strOk) == 1)
		printf("OK\n");
	else
		printf("KO\n");
	if (ft_str_is_printable("") == 1)
		printf("OK\n");
	else
		printf("KO\n");
	return (0);
}
