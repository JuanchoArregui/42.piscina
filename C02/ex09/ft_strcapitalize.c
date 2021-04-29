/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 10:24:27 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/25 10:48:12 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_alphanumeric(char c)
{
	return (((c >= 'a') && (c <= 'z'))
		|| ((c >= 'A') && (c <= 'Z'))
		|| ((c >= '0') && (c <= '9')));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first_letter;

	i = 0;
	first_letter = 1;
	while (str[i] != '\0')
	{	
		if (!check_alphanumeric(str[i]))
			first_letter = 1;
		else
		{
			if (first_letter)
			{
				if ((str[i] >= 'a') && (str[i] <= 'z'))
					str[i] = str[i] - 32;
				first_letter = 0;
			}
			else
				if ((str[i] >= 'A') && (str[i] <= 'Z'))
					str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
