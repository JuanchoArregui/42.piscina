/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:46:21 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/26 15:46:23 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	b;
	int	j;

	j = 0;
	i = -1;
	b = 0;
	if (!to_find[0])
		return (str);
	while (str[++i])
	{
		if (str[i] == to_find[0])
		{
			j = i;
			while (to_find[b] == str[j])
			{
				if (to_find[b + 1] == '\0')
					return (&str[i]);
				j++;
				b++;
			}
			b = 0;
		}
	}
	return (0);
}
