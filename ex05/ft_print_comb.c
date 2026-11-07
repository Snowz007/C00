#include <unistd.h>

void ft_print_comb(void){

int s1;

int s2;

int s3;

char c;

s1 = 0;
s2 = 0;
s3 = 0;


while(s1 <= 7){
    s2 = s1 + 1;
while(s2 <= 8){
   s3 = s2 + 1;
while(s3 <= 9){
   c = s1 + '0';
write(1, &c, 1);
c = s2 + '0';
write(1, &c, 1);
c = s3 + '0';
write(1, &c, 1);
if (s1 == 7 && s2 == 8 && s3 == 9)
{
}
else{
   write(1, ", ", 2);
}
   s3++;
}
s2++;
 }
 s1++;
}
}
int main(void){
   ft_print_comb();
}
