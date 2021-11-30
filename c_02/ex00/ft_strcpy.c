//When do testing, don't use pointer to char, use char array instead, because pointer ones are not editable.
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int     id;

    id = 0;
    while(src[id] != '\0')
    {
        dest[id] = src[id];
        id++;
    }
    *(dest + id) = '\0';
    return (dest);
}

int main(void)
{
    char a[] = "123";

    ft_strcpy(a, "fefwefggu");
    printf("%s", a);
    return (0);
}
