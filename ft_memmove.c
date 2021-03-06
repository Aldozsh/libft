#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  count;

    if (dest == src || !n)
        return (dest);
    count = 0;
    if (dest < src)
    {
        while (count < n)
        {
            *((char *)dest + count) = *((char *)src + count);
            count++;
        }
    }
    else
    {
        while (n > 0)
        {
            *((char *)dest + n - 1) = *((char *)src + n - 1);
            count--;
        }  
    }
    return (dest);    
}