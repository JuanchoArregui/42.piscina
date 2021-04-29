/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 14:49:09 by jnaftana          #+#    #+#             */
/*   Updated: 2021/04/28 18:46:16 by jnaftana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *a)
{
	while (*a)
	{
		write(1, a, 1);
		a++;
	}
}

int	ft_strcmp(char *s1, char *s2)
// IF S1 > S2: return
{
	while (*s1 && *s2)
	{
		if (*s1 > *s2)
			return (*s1 - *s2);
		else if (*s2 > *s1)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1)
		return (*s1);
	else if (*s2)
		return (- *s2);
	else
		return (0);
}

void	ft_sort(char **argv, int argc)
{
	int		has_changed;
	int		j;
	char	*temp;

	has_changed = 1;
	while (has_changed == 1)
	{
		has_changed = 0;
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
				has_changed = 1;
			}
			j++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort(argv, argc);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
