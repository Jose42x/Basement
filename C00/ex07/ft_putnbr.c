#include <unistd.h>

void ft_putnbr(int nb)
{
    write(1, &nb, 16);
}

int main(void)
{
   ft_putnbr(5);
   return 0;
}