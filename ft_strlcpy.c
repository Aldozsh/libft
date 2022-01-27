#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  count;
    size_t  length;

    count = 0;
    length = 0;

    if (!dst || !src)
        return (0);
    while (*(src + length))
        length++;
    while (*(src + count) && count + 1 < size)
    {
        *(dst + count) = *(src + count);
        count++;
    }
    if (size)
        *(dst + count) = '\0';
    return (count);    
}