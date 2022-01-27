#include "libft.h"

int ft_isalpha(unsigned char c);
int ft_isdigit(unsigned char c);

int ft_isalnum(unsigned char c)
{
    int isAlpha;
    int isDigit;

    isAlpha = ft_isalpha(c);
    isDigit = ft_isdigit(c);
    if (isAlpha || isDigit)
        return (1);
    else
        return (0);
}

int main ()
{
    char c = '*';
    printf("is alnum %c %d\n", c, ft_isalnum(c));
}