#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int     id;

    id = 0;
    while((src[id] != '\0') && (id < size))
    {
        if (id + 1 < size)
        {
            *(dest + id) = src[id];
            id++;
        }
        else
        {
            break;
        }
    }
    *(dest + id) = '\0';
    while (src[id] != '\0')
    {
        id++;
    }
    return (id);
}

int main(void)
{
    char    a[100] = "";
    unsigned int     b;

    b = ft_strlcpy(a, "Hello there, Venus", 19);
    printf("%s\n%d", a, b);
    return (0);
}
