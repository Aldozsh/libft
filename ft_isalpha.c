#include "libft.h"

int ft_isalpha(unsigned char c)
{
    int isMin;
    int isMay;

    isMin = c >= 'a' && c<= 'z';
    isMay = c >= 'A' && c<= 'Z';
    if (isMin || isMay)
        return (1);
    else
        return (0);
}

/*
int main ()
{
    char c = '7';
    printf("is alpha %c %d\n", c, ft_isalpha(c));
}
*/