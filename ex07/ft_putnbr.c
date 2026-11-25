#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	n;

	if (nb > 0)
	{
		ft_putnbr(nb / 10);
		n = '0' + (nb % 10);
		write(1, &n, 1);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nb = -nb);
	}
}

int	main(void)
{
	ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}
