#include <unistd.h>

 void ft_print_alphabet(void)
 {
     char first = 'a';

     while(first <= 'z')
     {
         write(1, &first, 1);
         first++;
     }
 }

int main(void) 
{
    ft_print_alphabet();
    return 0;
} 