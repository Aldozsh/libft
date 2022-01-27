#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int count;
    count = ft_strlen((char *)s);

    if (c == '\0')
        return ((char *)s);
    while (count > 0)
    {
        if (*(s + count - 1) == c )
            return ((char *)(s + count - 1));
        count--;
    }
    return (0);    
}
