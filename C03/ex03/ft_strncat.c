/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:45:00 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/26 15:45:02 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				j;
	unsigned int	n;

	j = 0;
	n = 0;
	while (dest[j] != '\0')
		j++;
	while (n < nb && src[n] != '\0')
	{
		dest[j] = src[n];
		j++;
		n++;
	}
	dest[j] = '\0';
	return (dest);
}
