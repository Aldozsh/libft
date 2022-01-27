#include "libft.h"

int ft_isdigit(unsigned char c)
{
    if (c >= '0' && c<= '9')
        return (1);
    else
        return (0);
}

/*
int main ()
{
    char c = 56;
    printf("is digit %c %d\n", c, ft_isdigit(c));
}
*/