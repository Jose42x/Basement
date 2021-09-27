#include <unistd.h>
void ft_print_comb2(void)
{
   char i = '0', j = '0', x = '0', y = '1';

   while (i <= '9') 
   {
      while (j <= '9')
      {
         while (x <= '9')
         {
            while (y <= '9')
            {
               write(1, &i, 1);
               write(1, &j, 1);
               write(1, " ", 1);
               write(1, &x, 1);
               write(1, &y, 1);
               write(1, ", ", 2);
               y++;
            }
            y = '0';
            x++;
         }
         j++;
         x = i;
         y = j + 1;
      }
      j = '0';
      i++;
   }
}

int main(void)
{
   ft_print_comb2();
   return 0;
}