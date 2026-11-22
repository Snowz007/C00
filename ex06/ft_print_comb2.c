#include <unistd.h>

void	write_again(int n)
{
	char	c;

	c = n / 10 + '0';
	write(1, &c, 1);
	c = n % 10 + '0';
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	n;
	int	n2;

	n = 0;
	while (n <= 98)
	{
		n2 = n + 1;
		while (n2 <= 99)
		{
			write_again(n);
			write(1, " ", 1);
			write_again(n2);
			if (n != 98 || n2 != 99)
			{
				write(1, ", ", 1);
			}
			n2++;
		}
		n++;
	}
}

int	main(void)
{
	ft_print_comb2();
	write(1, "\n", 1);
	return(0);
}
