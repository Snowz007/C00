#include <unistd.h>

char c;

void ft_putnbr(int nb)
{
  c = nb / 10 + '0';
  write(1, &c, 1);
  c = nb % 10 + '0';
  write(1, &c, 1);
  }

int main(void)
{

ft_putnbr(42);
write(1, "\n", 1);
return 0;
}
