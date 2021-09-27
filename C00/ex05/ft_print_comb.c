#include <unistd.h>

void ft_print_comb(void)
{
   char i = '0', j = '1', z = '2';
   while (i <= '9') {
      while (j <= '9') {
         while (z <= '9')
         {
            write(1, &i, 1);
            write(1, &j, 1);
            write(1, &z, 1);
            if(i < '7')
               write(1, ", ", 2);
            z++;
         }
         z = ++j + 1;
      }
      j = ++i + 1;
      if(z > '9') j--;
   }
}

int main(void)
{
   ft_print_comb();
   return 0;
}