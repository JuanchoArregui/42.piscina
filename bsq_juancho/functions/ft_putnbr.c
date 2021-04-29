#include<headers.h>

void	ft_putnbr(int nb)
{
	char	number;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -1 * (nb);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	number = nb + '0';
	if (number >= '0' && number <= '9')
		write(1, &number, 1);
}
