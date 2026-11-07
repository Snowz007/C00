#include <unistd.h>

void ft_print_comb2(void){
    int s1;
    int s2;
    char c;

s1 = 00;
s2 = 00;

while(s1 <= 98){
    s2 = s1 + 1;
    while(s2 <= 99){
        c = s1 / 10 + '0';
    write(1, &c, 1);
    c = s1 % 10 + '0';
    write(1, &c, 1);
        write(1, " ", 1);
        c = s2 / 10 + '0';
        write(1, &c, 1);
        c = s2 % 10 + '0';
        write(1, &c, 1);
        if (s1 == 98 && s2 == 99)
    {   
    }
    else
    {
    write(1, ", ", 2);
    }
        s2++;
    }
    s1++;
  }
}

int main(void){
    ft_print_comb2();
    write(1, "\n", 1);
    return 0;
}
