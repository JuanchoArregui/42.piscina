/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:33:50 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/27 12:55:45 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	a;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		a = s1[i] - s2[i];
		if (a != 0)
			return (a);
		i++;
	}
	a = 0;
	return (a);
}
