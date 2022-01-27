#include "libft.h"

int ft_isprint(unsigned char c)
{
    if (c >= 32 && c<= 126)
        return (1);
    else
        return (0);
}

int main ()
{
    char c = 126;
    printf("is print %c %d\n", c, ft_isprint(c));
}