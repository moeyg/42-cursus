#include "libft.h"

char    *ft_strrchr(const char *str, int ascii_num)
{
    size_t  index;

    index = ft_strlen(str);
    str = (char *)str;
    ascii_num = (char)ascii_num;
    while (index > 0)
    {
        if (str[index] == ascii_num)
            return (str[index]);
        index --;
    }
    return (0);
}