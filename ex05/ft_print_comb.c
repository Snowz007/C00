#include <unistd.h>

void	write_c(int s1, int s2, int s3)
{
	char	c;

	c = s1 + '0';
	write(1, &c, 1);
	c = s2 + '0';
	write(1, &c, 1);
	c = s3 + '0';
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	s1;
	int	s2;
	int	s3;

	s1 = 0;
	while (s1 <= 7)
	{
		s2 = s1 + 1;
		while (s2 <= 8)
		{
			s3 = s2 + 1;
			while (s3 <= 9)
			{
				write_c(s1, s2, s3);
				if (s1 != 7)
				{
					write(1, ", ", 2);
				}
				s3++;
			}
			s2++;
		}
		s1++;
	}
}



int main(void)
{
	ft_print_comb();
	write(1, "\n", 1);
	return 0;
}
