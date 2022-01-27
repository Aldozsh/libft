#include "libft.h"

int ft_isascii(unsigned char c)
{
    if (c >= 0 && c<= 127)
        return (1);
    else
        return (0);
}

/*
int main ()
{
    char c = 128;
    printf("is digit %c %d\n", c, ft_isascii(c));
}
*/