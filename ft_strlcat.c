#include "libft.h"

size_t  strlcat(char *dst, const char *src, size_t size)
{
    size_t count;
    size_t srcLength;
    size_t  value;

    if (size == 0)
    {
        return (ft_strlen(src));
    }
    else if (size < ft_strlen(dst))
    {
        value = ft_strlen(src) + size;
    }
    else
        value = ft_strlen(src) + ft_strlen(dest);
    count = 0;
    while(*(dest + count))
            count++;
    srcLength = 0;
    while (*(src + srcLength) && count + 1 < size)
    {
        *(dest + count) = *(src + srcLength);
        srcLength++;
        count++;
    }
    *(dst + count) = '\0';
    return (value);        
}