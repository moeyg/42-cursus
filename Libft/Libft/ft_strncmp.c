#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t length)
{
    size_t  index;

    index = 0;
    while (length > 0 && str1[index] != '\0' && str2[index] != '\0')
    {
        if (str1[index] != str2[index])
            return ((unsigned char)str1[index] - (unsigned char)str2[index]);
        index ++;
        length --;
    }
    return (0);
}