#include <unistd.h>

void ft_print_comb(void)
{
    int num = 000;
    char str[16];

    while(num <= 999)
     {
        int LengthUsed = sprintf(str, "%d", num);
        write(1, str, LengthUsed);
        num++;
     }
}