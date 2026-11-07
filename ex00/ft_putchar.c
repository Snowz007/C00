#include <unistd.h>


int main(void){
	void ft_putchar(char c)
	{
    	write(1, &c, 1);
	}
}
